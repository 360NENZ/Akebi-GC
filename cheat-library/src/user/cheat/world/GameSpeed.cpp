#include "pch-il2cpp.h"
#include "GameSpeed.h"

#include <helpers.h>
#include <cheat/events.h>
#include <cheat/game/EntityManager.h>

namespace cheat::feature
{
    GameSpeed::GameSpeed() : Feature(),
        NF(f_Enabled, "GameSpeed Enabled", "GameSpeed", false),
        NF(f_HotKey, "GameSpeed HotKey", "GameSpeed", Hotkey(ImGuiKey_CapsLock)),
        NF(f_Speed, "GameSpeed Multiplier", "GameSpeed", 5.0f)
    {
        events::GameUpdateEvent += MY_METHOD_HANDLER(GameSpeed::OnGameUpdate);
    }

    const FeatureGUIInfo& GameSpeed::GetGUIInfo() const
    {
        static const FeatureGUIInfo info{ "GameSpeed", "World", true };
        return info;
    }

    void GameSpeed::DrawMain()
    {
        ConfigWidget("GameSpeed Enabled", f_Enabled, "Speeds Up Game with HotKey");
        if (f_Enabled)
        {
            ConfigWidget("GameSpeed HotKey", f_HotKey, "Set GameSpeed HotKey");
            ConfigWidget(f_Speed, 1.0f, 1.0f, 15.0f, "Set GameSpeed Multiplier\n" \
			"Multiplier is a multiplicity of 1.0f for how much faster the game should run.\n" \
			"Do NOT Use this in the Open World, only use in Menus/etc, VERY DANGEROUS!"
			);
        }
    }

    bool GameSpeed::NeedStatusDraw() const
    {
        return f_Enabled;
    }

    void GameSpeed::DrawStatus()
    {
		ImGui::Text("GameSpeed");
    }

    GameSpeed& GameSpeed::GetInstance()
    {
        static GameSpeed instance;
        return instance;
    }

    // Raised On Game Update
    void GameSpeed::OnGameUpdate()
    {
        static bool isSpeed = false;
        if (f_Enabled ? f_HotKey.value().IsPressed() : Hotkey(ImGuiKey_CapsLock).IsPressed())
        {
            if (!isSpeed)
            {
                isSpeed = true;
                float currentSpeed = app::Time_get_timeScale(nullptr);
                if (currentSpeed == 1.0f)
                    app::Time_set_timeScale(f_Speed, nullptr);
            }
        }

        if (f_Enabled ? !f_HotKey.value().IsPressed() : !Hotkey(ImGuiKey_CapsLock).IsPressed())
        {
            if (isSpeed)
            {
                isSpeed = false;
                float currentSpeed = app::Time_get_timeScale(nullptr);
                if (currentSpeed != 1.0f)
                    app::Time_set_timeScale(1.0f, nullptr);
            }
        }
        // float gameSpeed = app::Time_get_timeScale(nullptr);
        //LOG_DEBUG("GameSpeed: %f Enabled: %d Value: %f Key: %s", gameSpeed, f_GameSpeedEnabled, f_GameSpeedVal, f_GameSpeedKey);
    }
}

