#include "pch-il2cpp.h"
#include "BoobsChanger.h"

#include <helpers.h>
#include <cheat/events.h>
#include <misc/cpp/imgui_stdlib.h>

namespace cheat::feature
{
    static std::string ActiveHero;
    static app::GameObject* pathBoob = new app::GameObject;
    static app::GameObject* avatarBoobL;
    static app::GameObject* avatarBoobR;

    BoobsChanger::BoobsChanger() : Feature(),
        NF(f_Enabled, "Boobs Changer", "Visuals::BoobsChanger", false),
        toBeUpdate(), nextUpdate(0)
    {
        events::GameUpdateEvent += MY_METHOD_HANDLER(BoobsChanger::OnGameUpdate);
    }

    const FeatureGUIInfo& BoobsChanger::GetGUIInfo() const
    {
        static const FeatureGUIInfo info{ "BoobsChanger", "Visuals", true };
        return info;
    }

    void BoobsChanger::DrawMain()
    {
        ConfigWidget(f_Enabled, "Boobs Changer.");
        ImGui::Text("Active Hero: %s", ActiveHero.c_str());
    }

    bool BoobsChanger::NeedStatusDraw() const
    {
        return f_Enabled;
    }

    void BoobsChanger::DrawStatus()
    {
        ImGui::Text("Boobs Changer[%s]", f_BoobL && f_BoobR ? "" : "No Boobies");
    }

    BoobsChanger& BoobsChanger::GetInstance()
    {
        static BoobsChanger instance;
        return instance;
    }

    void BoobsChanger::OnGameUpdate()
    {
        if (!f_Enabled)
            return;

        auto currentTime = util::GetCurrentTimeMillisec();
        if (currentTime < nextUpdate)
            return;

        if (f_Enabled)
        {
            auto AvatarRoot = app::GameObject_Find(string_to_il2cppi("/EntityRoot/AvatarRoot"), nullptr);

            if (AvatarRoot != nullptr)
            {
                auto Transform = app::GameObject_GetComponentByName(AvatarRoot, string_to_il2cppi("Transform"), nullptr);
                auto HeroCount = app::Transform_get_childCount(reinterpret_cast<app::Transform*>(Transform), nullptr);

                for (int i = 0; i <= HeroCount - 1; i++)
                {
                    auto HeroComponent = app::Transform_GetChild(reinterpret_cast<app::Transform*>(Transform), i, nullptr);
                    auto HeroGameObject = app::Component_1_get_gameObject(reinterpret_cast<app::Component_1*>(HeroComponent), nullptr);
                    auto isActiveHero = app::GameObject_get_active(HeroGameObject, nullptr);

                    if (isActiveHero)
                    {
                        auto GameObjectName = app::Object_1_get_name(reinterpret_cast<app::Object_1*>(HeroGameObject), nullptr);
                        ActiveHero = il2cppi_to_string(GameObjectName);
                        std::string Hero = ActiveHero.erase(ActiveHero.find("(Clone)"));

                        std::string nameL = "/EntityRoot/AvatarRoot/" + il2cppi_to_string(GameObjectName) + "/OffsetDummy/" + Hero.c_str() + "/Bip001/Bip001 Pelvis/Bip001 Spine/Bip001 Spine1/Bip001 Spine2/+Breast L A01";
                        std::string nameR = "/EntityRoot/AvatarRoot/" + il2cppi_to_string(GameObjectName) + "/OffsetDummy/" + Hero.c_str() + "/Bip001/Bip001 Pelvis/Bip001 Spine/Bip001 Spine1/Bip001 Spine2/+Breast R A01";

                        auto GameObjectBreastL = app::GameObject_Find(string_to_il2cppi(nameL.c_str()), nullptr);
                        auto GameObjectBreastR = app::GameObject_Find(string_to_il2cppi(nameR.c_str()), nullptr);
                        if (app::GameObject_get_active(GameObjectBreastL, nullptr) && app::GameObject_get_active(GameObjectBreastR, nullptr))
                        {
                            //printf("Left Boobies Found: %s\n", nameL.c_str());

                            avatarBoobL = GameObjectBreastL;
                            avatarBoobR = GameObjectBreastR;

                            auto transform_L = app::GameObject_get_transform(avatarBoobL, nullptr);
                            auto transform_R = app::GameObject_get_transform(avatarBoobR, nullptr);

                            auto parent_L = app::Transform_get_parent(transform_L, nullptr);
                            auto parent_R = app::Transform_get_parent(transform_R, nullptr);

                            auto localScale_L = app::Transform_get_localScale(transform_L, nullptr);
                            auto localScale_R = app::Transform_get_localScale(transform_R, nullptr);
                            app::Transform_set_localScale(transform_L, app::Vector3{ 10, 10, 10 }, nullptr);
                            app::Transform_set_localScale(transform_R, app::Vector3{ 10, 10, 10 }, nullptr);

                            auto rotation_L = app::Transform_get_rotation(transform_L, nullptr);
                            auto rotation_R = app::Transform_get_rotation(transform_R, nullptr);

                            auto position_L = app::Transform_get_position(transform_L, nullptr);
                            auto position_R = app::Transform_get_position(transform_R, nullptr);

                            if (!f_BoobL && !f_BoobR)
                            {
                                app::GameObject__ctor(pathBoob, string_to_il2cppi("Boobs"), nullptr);
                                auto obj_pathBoob = app::GameObject_Find(string_to_il2cppi("Boobs"), nullptr);
                                if (obj_pathBoob != nullptr)
                                {
                                    LOG_DEBUG("obj_pathBoob");
                                    auto transform_pathBoob = app::GameObject_get_transform(pathBoob, nullptr);
                                    app::Transform_set_parent(transform_pathBoob, parent_L, nullptr);
                                    app::Transform_set_localScale(transform_pathBoob, localScale_L, nullptr);
                                    app::Transform_set_rotation(transform_pathBoob, rotation_L, nullptr);
                                    app::Transform_set_position(transform_pathBoob, position_L, nullptr);

                                    app::Transform_set_parent(parent_L, transform_pathBoob, nullptr);
                                    app::Transform_set_parent(parent_R, transform_pathBoob, nullptr);

                                    app::Transform_set_parent(transform_L, transform_pathBoob, nullptr); //Breast to Boobs
                                    app::Transform_set_parent(transform_R, transform_pathBoob, nullptr); //Breast to Boobs

                                    app::Transform_set_localScale(transform_L, app::Vector3{ 10, 10, 10 }, nullptr);
                                    app::Transform_set_localScale(transform_R, app::Vector3{ 10, 10, 10 }, nullptr);
                                }
                                f_BoobL, f_BoobR = true;
                            }
                        }
                    }
                }
            }
            else
            {
                f_BoobL = false;
                f_BoobR = false;
            }
        }
        nextUpdate = currentTime + (int)f_DelayUpdate;
    }
}
