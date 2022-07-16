// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2017.4.15 - 2017.4.40

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;


// Map hooks
DO_APP_FUNC(0x037ABEF0, void, MoleMole_InLevelMapPageContext_OnMarkClicked, (InLevelMapPageContext* __this, MonoMapMark* mark, MethodInfo* method));
DO_APP_FUNC(0x037C29B0, void, MoleMole_InLevelMapPageContext_OnMapClicked, (InLevelMapPageContext* __this, Vector2 screenPos, MethodInfo* method));
DO_APP_FUNC(0x01BBDFB0, bool, MoleMole_MapModule_IsAreaUnlock, (MoleMole_MapModule* __this, uint32_t sceneID, uint32_t areaID, MethodInfo* method));


// should be 'op_Implicit' not 'get_value' 'BIKAKJDICGJ_1'
DO_APP_FUNC(0x02CB1BC0, uint16_t, MoleMole_SimpleSafeUInt16_get_Value, (SimpleSafeUInt16 v, MethodInfo* method));
DO_APP_FUNC(0x02F8CDE0, uint32_t, MoleMole_SimpleSafeUInt32_get_Value, (SimpleSafeUInt32 v, MethodInfo* method));
DO_APP_FUNC(0x056E9FB0, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));


// Map utility
DO_APP_FUNC(0x013041A0, Rect, MonoInLevelMapPage_get_mapRect, (MonoInLevelMapPage* __this, MethodInfo* method));
DO_APP_FUNC(0x01304170, Transform*, MonoInLevelMapPage_get_mapBackground, (MonoInLevelMapPage* __this, MethodInfo* method));


// Teleport hooks
DO_APP_FUNC(0x012BFF50, void, GameManager_Update, (GameManager* __this, MethodInfo* method));
DO_APP_FUNC(0x010CE4C0, void, MoleMole_LoadingManager_SceneGoto, (MoleMole_LoadingManager* __this, PlayerEnterSceneNotify* notify, MethodInfo* method));
DO_APP_FUNC(0x010D2780, void, MoleMole_LoadingManager_PerformPlayerTransmit, (MoleMole_LoadingManager* __this, Vector3 targetPos, EnterType__Enum enterType, uint32_t token, EvtTransmitAvatar_EvtTransmitAvatar_TransmitType__Enum transType, uint32_t enterReason, MethodInfo* method));
DO_APP_FUNC(0x010D2310, void, MoleMole_LoadingManager_RequestSceneTransToPoint, (MoleMole_LoadingManager* __this, uint32_t sceneId, uint32_t pointId, void* finishCallBackInForceDrag, MethodInfo* method));
DO_APP_FUNC(0x010CE200, bool, MoleMole_LoadingManager_NeedTransByServer, (MoleMole_LoadingManager* __this, uint32_t sceneId, Vector3 position, MethodInfo* method));
DO_APP_FUNC(0x00DFA490, Vector3, MoleMole_LocalEntityInfoData_get_initPos, (LocalEntityInfoData* __this, MethodInfo* method)); // shared offset


// Unlimited stamina
DO_APP_FUNC(0x022F4570, void, MoleMole_LevelSyncCombatPlugin_RequestSceneEntityMoveReq, (LevelSyncCombatPlugin* __this, uint32_t entityId, MotionInfo* syncInfo, bool isReliable, uint32_t HAOCOEMOMBG, MethodInfo* method));
DO_APP_FUNC(0x0401E2B0, void, MoleMole_DataItem_HandleNormalProp, (DataItem* __this, uint32_t type, int64_t value, DataPropOp__Enum state, MethodInfo* method));


// God mode
DO_APP_FUNC(0x01A5E180, void, VCHumanoidMove_NotifyLandVelocity, (VCHumanoidMove* __this, Vector3 velocity, float reachMaxDownVelocityTime, MethodInfo* method));
DO_APP_FUNC(0x01EBD230, bool, Miscs_CheckTargetAttackable, (BaseEntity* attackerEntity, BaseEntity* targetEntity, MethodInfo* method));
DO_APP_FUNC(0x01C7C1C0, void, MoleMole_LCBaseCombat_FireBeingHitEvent, (LCBaseCombat* __this, uint32_t attackeeRuntimeID, AttackResult* attackResult, MethodInfo* method));
DO_APP_FUNC(0x0107C8E0, bool, MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp, (ActorAbilityPlugin* __this, float delay, Object* arg, MethodInfo* method));


// Cooldown cheats
DO_APP_FUNC(0x00BE1500, bool, MoleMole_HumanoidMoveFSM_CheckSprintCooldown, (/* HumanoidMoveFSM */void* __this, MethodInfo* method));
DO_APP_FUNC(0x02493E30, bool, MoleMole_LCAvatarCombat_IsEnergyMax, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x02493B20, void, MoleMole_LCAvatarCombat_ChangeEnergy_1, (LCAvatarCombat* __this, ElementType__Enum type, float value, DataPropOp__Enum state, MethodInfo* method));
DO_APP_FUNC(0x02496D30, bool, MoleMole_LCAvatarCombat_OnSkillStart, (LCAvatarCombat* __this, uint32_t skillID, float cdMultipler, MethodInfo* method));
DO_APP_FUNC(0x02496AA0, bool, MoleMole_LCAvatarCombat_IsSkillInCD_1, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, MethodInfo* method));

DO_APP_FUNC(0x010B7510, void, MoleMole_ActorAbilityPlugin_AddDynamicFloatWithRange, (void* __this, String* key, float value, float min, float max, bool forceDoAtRemote, MethodInfo* method));

// Rapid fire
DO_APP_FUNC(0x01C87420, void, MoleMole_LCBaseCombat_DoHitEntity, (LCBaseCombat* __this, uint32_t targetID, AttackResult* attackResult, bool ignoreCheckCanBeHitInMP, MethodInfo* method));
DO_APP_FUNC(0x0394CFB0, void, MoleMole_Formula_CalcAttackResult, (CombatProperty* attackCombatProperty, CombatProperty* defenseCombatProperty, AttackResult* attackResult, BaseEntity* attackerEntity, BaseEntity* attackeeEntity, MethodInfo* method));


// World cheats
DO_APP_FUNC(0x00AD9A20, void, MoleMole_VCMonsterAIController_TryDoSkill, (/* VCMonsterAIController */ void* __this, uint32_t skillID, MethodInfo* method)); // Manual
DO_APP_FUNC(0x00AD0470, void, MoleMole_LCSelectPickup_AddInteeBtnByID, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x02A86D80, bool, MoleMole_LCSelectPickup_IsInPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x00ACFC60, bool, MoleMole_LCSelectPickup_IsOutPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x03947CC0, void, MoleMole_ItemModule_PickItem, (MoleMole_ItemModule* __this, uint32_t entityID, MethodInfo* method));
DO_APP_FUNC(0x01055D30, void, MoleMole_LevelSceneElementViewPlugin_Tick, (LevelSceneElementViewPlugin* __this, float inDeltaTime, MethodInfo* method));


// <summary> NEED TO FIND </summary>
// Dialog skipping
DO_APP_FUNC(0x032B0360, bool, MoleMole_TalkDialogContext_get_canClick, (TalkDialogContext* __this, MethodInfo* method)); // delete
DO_APP_FUNC(0x032B1F60, bool, MoleMole_TalkDialogContext_get_canAutoClick, (TalkDialogContext* __this, MethodInfo* method));
DO_APP_FUNC(0x032AE7D0, void, MoleMole_TalkDialogContext_OnDialogSelectItem, (TalkDialogContext* __this, Notify* notify, MethodInfo* method));
DO_APP_FUNC(0x03C0DEF0, void, MoleMole_InLevelCutScenePageContext_OnFreeClick, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x03C0F7D0, void, MoleMole_InLevelCutScenePageContext_UpdateView, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x03C0D4F0, void, MoleMole_InLevelCutScenePageContext_ClearView, (InLevelCutScenePageContext* __this, MethodInfo* method));
// Skip Cutscene | RyujinZX#6666
DO_APP_FUNC(0x03660C20, void, CriwareMediaPlayer_Update, (CriwareMediaPlayer* __this, MethodInfo* method));
DO_APP_FUNC(0x036607D0, void, CriwareMediaPlayer_Skip, (CriwareMediaPlayer* __this, MethodInfo* method));


// Protection bypass
DO_APP_FUNC(0x05F75C30, Byte__Array*, Application_RecordUserData, (int32_t nType, MethodInfo* method));


// Networking
DO_APP_FUNC(0x01A7CDC0, void, Kcp_KcpNative_kcp_packet_destroy, (KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x01A7CBB0, KcpPacket_1*, Kcp_KcpNative_kcp_packet_create, (uint8_t* data, int32_t len, MethodInfo* method));
DO_APP_FUNC(0x01A7D220, int32_t, Kcp_KcpNative_kcp_client_send_packet, (void* kcp_client, KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x02F16340, bool, MoleMole_KcpClient_TryDequeueEvent, (void* __this, ClientKcpEvent* evt, MethodInfo* method));
DO_APP_FUNC(0x02280B10, void, MoleMole_Packet_XorEncrypt, (Byte__Array** bytes, int32_t length, MethodInfo* method));


// Lua functions
DO_APP_FUNC(0x039927B0, Byte__Array*, LuaManager_LoadCustomLuaFile, (LuaManager* __this, String** filePath, bool* recycleBytes, MethodInfo* method));
DO_APP_FUNC(0x045A46A0, void, Lua_xlua_pushasciistring, (void* L, String* str, MethodInfo* method));
DO_APP_FUNC(0x0312A550, void, MoleMole_LuaShellManager_DoString, (void* __this, Byte__Array* byteArray, MethodInfo* method));
DO_APP_FUNC(0x055227B0, void*, LuaEnv_DoString, (void* __this, Byte__Array* chunk, String* chunkName, void* env, MethodInfo* method));
DO_APP_FUNC(0x03129D10, void, MoleMole_LuaShellManager_ReportLuaShellResult, (void* __this, String* type, String* value, MethodInfo* method)); // Anticheat info


// Debug hooks
DO_APP_FUNC(0x01E131B0, AttackResult_1*, MoleMole_AttackResult_FillProtoAttackResult, (AttackResult* __this, uint32_t attackerID, uint32_t defenseId, AttackResult_1* protoAttackResult, MethodInfo* method));
DO_APP_FUNC(0x022F6E30, void, MoleMole_LevelSyncCombatPlugin_SendFaceToDir, (void* __this, uint32_t runtimeID, Vector3 forward, MethodInfo* method));
DO_APP_FUNC(0x025FBC60, void, MoleMole_BaseEntity_FireEvent, (BaseEntity* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x010B4730, bool, MoleMole_ActorAbilityPlugin_OnEvent, (void* __this, BaseEvent* e, MethodInfo* method));


// Kill aura
DO_APP_FUNC(0x02C02F30, void, MoleMole_EvtCrash_Init, (EvtCrash* __this, uint32_t targetID, MethodInfo* method)); // Manual offset
DO_APP_FUNC(0x00B4EBF0, void, MoleMole_EventManager_FireEvent, (MoleMole_EventManager* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x00D5DB90, bool, MoleMole_FixedBoolStack_get_value, (FixedBoolStack* __this, MethodInfo* method));

// 2.8 changed to 'MoleMole_EventHelper_Allocate_5'
DO_APP_FUNC(0x06052720, EvtCrash*, MoleMole_EventHelper_Allocate_103, (MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x09EDB8B0, MoleMole_EventHelper_Allocate_103__MethodInfo);

DO_APP_FUNC(0x020229B0, void, MoleMole_BaseMoveSyncPlugin_ConvertSyncTaskToMotionInfo, (BaseMoveSyncPlugin* __this, MethodInfo* method));


// <summary> NEED TO FIND </summary>
// Fishing
DO_APP_FUNC(0x02695850, void, MoleMole_FishingModule_RequestFishCastRod, (void* __this, uint32_t baitId, uint32_t rodId, Vector3 pos, uint32_t rodEntityId, MethodInfo* method));

DO_APP_FUNC(0x02698820, void, MoleMole_FishingModule_RequestFishBite, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x02696680, void, MoleMole_FishingModule_OnFishBiteRsp, (void* __this, FishBiteRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x02695A60, void, MoleMole_FishingModule_RequestFishBattleBegin, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x02698920, void, MoleMole_FishingModule_OnFishBattleBeginRsp, (void* __this, FishBattleBeginRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x02694C20, void, MoleMole_FishingModule_RequestFishBattleEnd, (void* __this, FishBattleResult__Enum result, bool isAlwaysBonus, float mxBonusTime, MethodInfo* method));
DO_APP_FUNC(0x02694F90, void, MoleMole_FishingModule_OnFishBattleEndRsp, (void* __this, FishBattleEndRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x02694DB0, void, MoleMole_FishingModule_OnExitFishingRsp, (void* __this, void* rsp, MethodInfo* method));
DO_APP_FUNC(0x02696DE0, void, MoleMole_FishingModule_onFishChosenNotify, (void* __this, void* notify, MethodInfo* method));


// Visuals
DO_APP_FUNC(0x03269DF0, void, MoleMole_SCameraModuleInitialize_SetWarningLocateRatio, (SCameraModuleInitialize* __this, double deltaTime, CameraShareData* data, MethodInfo* method));
DO_APP_FUNC(0x02E42250, void, MoleMole_VCBaseSetDitherValue_set_ManagerDitherAlphaValue, (MoleMole_VCBaseSetDitherValue* __this, float value, MethodInfo* method));

// Chest Indicator | RyujinZX#6666
DO_APP_FUNC(0x039344C0, bool, MoleMole_LCIndicatorPlugin_DoCheck, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x039354B0, void, MoleMole_LCIndicatorPlugin_ShowIcon, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x03936010, void, MoleMole_LCIndicatorPlugin_HideIcon, (LCIndicatorPlugin* __this, MethodInfo* method));


// Auto Cooking | RyujinZX#6666
DO_APP_FUNC(0x0169AD60, void, MoleMole_PlayerModule_RequestPlayerCook, (MoleMole_PlayerModule* __this, uint32_t recipeId, uint32_t avatarId, uint32_t qteQuality, uint32_t count, MethodInfo* method));
DO_APP_FUNC(0x016BEB70, void, MoleMole_PlayerModule_OnPlayerCookRsp, (MoleMole_PlayerModule* __this, PlayerCookRsp* rsp, MethodInfo* method));
// <summary> NEED TO FIND </summary>
DO_APP_FUNC(0x012C3890, void, MoleMole_CookingQtePageContext_UpdateProficiency, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x01765DB0, uint32_t, MoleMole_Config_CookRecipeExcelConfig_CheckCookFoodMaxNum, (uint32_t UpdateCookRecipeDic, MethodInfo* method));
DO_APP_FUNC(0x012BC260, void, CookingQtePageContext_CloseItemGotPanel, (CookingQtePageContext* __this, MethodInfo* method));

// Profile Changer | RyujinZX#6666
DO_APP_FUNC(0x02A38BA0, Button_1*, ProfilePage, (MonoInLevelPlayerProfilePage* __this, MethodInfo* method)); // MonoInLevelPlayerProfilePage_get_logoutButton
DO_APP_FUNC(0x02910350, void, ProfileEditPage, (MonoFriendInformationDialog* __this, Sprite* value, MethodInfo* method)); // MonoFriendInformationDialog_set_icon 

// Free Camera
DO_APP_FUNC(0x05EE5890, float, Camera_get_fieldOfView, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x05EE5D00, void, Camera_set_fieldOfView, (Camera* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05EE5090, void, Camera_CopyFrom, (Camera* __this, Camera* other, MethodInfo* method));

// Game Object, Component, Transform Utility
DO_APP_FUNC(0x05F8E760, GameObject*, GameObject_Find, (String* name, MethodInfo* method));
DO_APP_FUNC(0x05F8E770, Component_1*, GameObject_GetComponentByName, (GameObject* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x05F8EC90, bool, GameObject_get_active, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x05F8ED50, void, GameObject_set_active, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05F8EB50, void, GameObject_SetActive, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05EB5B40, Transform*, Transform_GetChild, (Transform* __this, int32_t index, MethodInfo* method));
DO_APP_FUNC(0x05E93210, Component_1*, Component_1_GetComponent_1, (Component_1* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x05F8E730, GameObject*, GameObject_CreatePrimitive, (PrimitiveType__Enum type, MethodInfo* method));
DO_APP_FUNC(0x05F8ED30, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB70A0, Quaternion, Transform_get_localRotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB7540, void, Transform_set_localRotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x05EB70E0, Vector3, Transform_get_localScale, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB7550, void, Transform_set_localScale, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05EB7060, Vector3, Transform_get_localPosition, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB7530, void, Transform_set_localPosition, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05F8E6C0, Component_1*, GameObject_AddComponentInternal, (GameObject* __this, String* className, MethodInfo* method));
DO_APP_FUNC(0x05F8E6D0, Component_1*, GameObject_AddComponent, (GameObject* __this, Type* componentType, MethodInfo* method));
DO_APP_FUNC(0x05EB1B80, void, Object_1_DestroyImmediate_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x05EB1E80, Object_1*, Object_1_Instantiate_2, (Object_1* original, MethodInfo* method));
DO_APP_FUNC(0x061980D0, Object*, Object_1_Instantiate_5, (Object* original, MethodInfo* method));
DO_APP_FUNC(0x061980D0, GameObject*, Object_1_Instantiate_10, (GameObject* original, MethodInfo* method));
DO_APP_FUNC(0x05EB6EA0, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05E933C0, GameObject*, Component_1_get_gameObject, (Component_1* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB2310, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method));
DO_APP_FUNC(0x05FB73D0, Material__Array*, Renderer_GetMaterialArray, (Renderer* __this, MethodInfo* method));
DO_APP_FUNC(0x05E94410, void, Material_set_mainTexture, (Material* __this, Texture* value, MethodInfo* method));
DO_APP_FUNC(0x05FA8E00, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method));
DO_APP_FUNC(0x05EB6ED0, Vector3, Transform_get_eulerAngles, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB7420, void, Transform_set_eulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05EB7220, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB75E0, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05EB7300, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB7660, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05EB6F40, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB7470, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05EB7650, void, Transform_set_rotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x05F365C0, float, Mathf_Lerp, (float a, float b, float t, MethodInfo* method));
DO_APP_FUNC(0x05F4DD10, float, Input_GetAxis, (String* axisName, MethodInfo* method));
DO_APP_FUNC(0x05EB1BD0, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method));


// Utility
DO_APP_FUNC(0x00B31700, String*, Text_get_text, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x05EBF7B0, void, Text_set_text, (Text* __this, String* value, MethodInfo* method));
DO_APP_FUNC(0x05EDD260, void, Slider_1_set_minValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05EDD1E0, void, Slider_1_set_maxValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05EDC6B0, void, Slider_1_set_value, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05F4E850, Rect, Sprite_get_rect, (Sprite* __this, MethodInfo* method));
DO_APP_FUNC(0x05FE0430, Texture2D*, NativeGallery_LoadImageAtPath, (String* imagePath, int32_t maxSize, bool markTextureNonReadable, bool generateMipmaps, bool linearColorSpace, MethodInfo* method));
DO_APP_FUNC(0x05F4E650, Sprite*, Sprite_Create, (Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, MethodInfo* method));
DO_APP_FUNC(0x05EBF2B0, void, Text_set_alignment, (Text* __this, TextAnchor__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05EBF570, void, Text_set_horizontalOverflow, (Text* __this, HorizontalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05EBF860, void, Text_set_verticalOverflow, (Text* __this, VerticalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05EBF1D0, bool, Text_get_resizeTextForBestFit, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x05EBF630, void, Text_set_resizeTextForBestFit, (Text* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05EBEC20, int32_t, Text_get_fontSize, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x05EBF420, void, Text_set_fontSize, (Text* __this, int32_t value, MethodInfo* method));

DO_APP_FUNC(0x01EB99A0, float, Miscs_CalcCurrentGroundWaterHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x01EB9030, float, Miscs_CalcCurrentGroundHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x01EB9150, float, Miscs_CalcCurrentGroundHeight_1, (float x, float z, float rayStartHeight, float rayDetectLength, int32_t layer, MethodInfo* method));
DO_APP_FUNC(0x01EB9540, Vector3, Miscs_CalcCurrentGroundNorm, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x01EC3600, Vector3, Miscs_GenWorldPos, (Vector2 levelMapPos, MethodInfo* method));
DO_APP_FUNC(0x01EC2FA0, Vector2, Miscs_GenLevelPos_1, (Vector3 worldPos, MethodInfo* method));
DO_APP_FUNC(0x01ED87F0, int32_t, Miscs_GetSceneGroundLayerMask, (MethodInfo* method));

DO_APP_FUNC(0x05457750, Vector3, WorldShiftManager_GetAbsolutePosition, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x054578F0, Vector3, WorldShiftManager_GetRelativePosition, (Vector3 pos, MethodInfo* method));

DO_APP_FUNC(0x02083100, Vector3, ActorUtils_GetAvatarPos, (MethodInfo* method));
DO_APP_FUNC(0x0208AA00, void, ActorUtils_SetAvatarPos, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x0208FB70, void, ActorUtils_SyncAvatarMotion, (int32_t state, MethodInfo* method));

DO_APP_FUNC(0x027ACF50, Notify, Notify_CreateNotify_1, (MoleMole_NotifyTypes__Enum type, Object* body, MethodInfo* method));

// should be 'op_Implicit' not 'get_value' 'BIKAKJDICGJ_1'
DO_APP_FUNC(0x025AA990, float, MoleMole_SafeFloat_get_Value, (SafeFloat safeFloat, MethodInfo* method));
// should be 'op_Implicit' not 'set_value' 'BIKAKJDICGJ'
DO_APP_FUNC(0x025AAA70, SafeFloat, MoleMole_SafeFloat_set_Value, (float value, MethodInfo* method));

DO_APP_FUNC(0x06054830, LCBaseCombat*, MoleMole_BaseEntity_GetLogicCombatComponent_1, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x09ED8948, MoleMole_BaseEntity_GetLogicCombatComponent_1__MethodInfo);

DO_APP_FUNC(0x025FBA00, String*, MoleMole_BaseEntity_ToStringRelease, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x02609500, void, MoleMole_BaseEntity_SetRelativePosition, (BaseEntity* __this, Vector3 position, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x025FD4E0, void, MoleMole_BaseEntity_SetAbsolutePosition, (BaseEntity* __this, Vector3 abpos, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x0261FF50, Vector3, MoleMole_BaseEntity_GetAbsolutePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x025FF640, Vector3, MoleMole_BaseEntity_GetRelativePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x02625810, Vector3, MoleMole_BaseEntity_GetForward, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x02624530, Vector3, MoleMole_BaseEntity_GetForwardFast, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0261DDE0, Vector3, MoleMole_BaseEntity_GetRight, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0261C470, Vector3, MoleMole_BaseEntity_GetUp, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0260A8C0, bool, MoleMole_BaseEntity_IsActive, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x025F5AF0, Rigidbody*, MoleMole_BaseEntity_GetRigidbody, (BaseEntity* __this, MethodInfo* method));

// type should be 'MoleMole_VCCharacterCombat' not 'MoleMole_VCBaseMove'
// function name should be 'GetVisualCombatComponent_3' not 'GetMoveComponent_1'
DO_APP_FUNC(0x06054860, VCBaseMove*, MoleMole_BaseEntity_GetMoveComponent_1, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x09EDDA20, MoleMole_BaseEntity_GetMoveComponent_1__MethodInfo);

DO_APP_FUNC(0x02600200, List_1_MoleMole_BaseComponent_*, MoleMole_BaseEntity_GetAllLogicComponents, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0163B480, GameObject*, MoleMole_BaseEntity_get_gameObject, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x02603E00, GameObject*, MoleMole_BaseEntity_get_rootGameObject, (BaseEntity* __this, MethodInfo* method));

// type should be 'MoleMole_AvatarEntity' not 'MoleMole_BaseEntity'
DO_APP_FUNC(0x032D3FE0, BaseEntity*, MoleMole_EntityManager_GetLocalAvatarEntity, (MoleMole_EntityManager* __this, MethodInfo* method));

DO_APP_FUNC(0x032CCE40, CameraEntity*, MoleMole_EntityManager_GetMainCameraEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x032CDD70, BaseEntity*, MoleMole_EntityManager_GetValidEntity, (MoleMole_EntityManager* __this, uint32_t runtimeID, MethodInfo* method));
// should be: DO_APP_FUNC(0x02F5F490, void, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager * __this, bool entity, MethodInfo * method));
DO_APP_FUNC(0x032E5C30, bool, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, uint32_t specifiedRuntimeID, MethodInfo* method));
DO_APP_FUNC(0x032D98F0, bool, MoleMole_EntityManager_IsCachedEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x032D2A30, List_1_MoleMole_BaseEntity_*, MoleMole_EntityManager_GetEntities, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x04C748E0, Bounds, Utils_4_GetBounds, (GameObject* go, MethodInfo* method));

// Modify | RyujinZX#6666
DO_APP_FUNC(0x00BEA1B0, void, MoleMole_HumanoidMoveFSM_LateTick, (HumanoidMoveFSM* __this, float deltaTime, MethodInfo* method));

DO_APP_FUNC(0x03ECE280, bool, MoleMole_ScenePropManager_GetTreeTypeByPattern, (MoleMole_ScenePropManager* __this, String* pattern, MoleMole_Config_TreeType__Enum* treeType, MethodInfo* method));
DO_APP_FUNC(0x02705430, void, MoleMole_NetworkManager_RequestHitTreeDropNotify, (MoleMole_NetworkManager* __this, Vector3 position, Vector3 hitPostion, MoleMole_Config_TreeType__Enum treeType, MethodInfo* method));
// function should be 'MoleMole_TimeUtil_get_LocalNowMsTimeStamp'
DO_APP_FUNC(0x05FFE5A0, uint64_t, MoleMole_TimeUtil_get_NowTimeStamp, (MethodInfo* method));

DO_APP_FUNC(0x010D0150, bool, MoleMole_LoadingManager_IsLoaded, (MoleMole_LoadingManager* __this, MethodInfo* method));

// Thanks to | RyujinZX
DO_APP_FUNC(0x018025B0, void, MoleMole_LCAbilityElement_ReduceModifierDurability, (LCAbilityElement* __this, int32_t modifierDurabilityIndex, float reduceDurability, Nullable_1_Single_ deltaTime, MethodInfo* method));

DO_APP_FUNC(0x02476340, BaseEntity*, MoleMole_GadgetEntity_GetOwnerEntity, (GadgetEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x037D8D50, void, MoleMole_InLevelMapPageContext_ZoomMap, (InLevelMapPageContext* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x037E21D0, void, MoleMole_InLevelMapPageContext_UpdateView, (InLevelMapPageContext* __this, MethodInfo* method));

DO_APP_FUNC(0x02C83880, bool, MoleMole_UIManager_HasEnableMapCamera, (MoleMole_UIManager* __this, MethodInfo* method));

DO_APP_FUNC(0x0130C230, void, MonoMiniMap_Update, (MonoMiniMap* __this, MethodInfo* method));
DO_APP_FUNC(0x009BC1A0, MonoMiniMap*, MonoInLevelMainPage_get_miniMap, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x030B26B0, void, MoleMole_GadgetModule_OnGadgetInteractRsp, (void* __this, GadgetInteractRsp* notify, MethodInfo* method));
DO_APP_FUNC(0x00EE8CF0, float, MoleMole_InLevelMainPageContext_get_miniMapScale, (InLevelMainPageContext* __this, MethodInfo* method));


// UnityEngine
DO_APP_FUNC(0x05F3C700, void, RenderSettings_set_fog, (bool value, MethodInfo* method));
DO_APP_FUNC(0x05F762C0, int32_t, Application_get_targetFrameRate, (MethodInfo* method));
DO_APP_FUNC(0x05F766D0, void, Application_set_targetFrameRate, (int32_t value, MethodInfo* method));

DO_APP_FUNC(0x05FD8790, bool, RectTransformUtility_ScreenPointToLocalPointInRectangle, (void* rect, Vector2 screenPoint, void* cam, Vector2* localPoint, MethodInfo* method));

DO_APP_FUNC(0x05EB71E0, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB75D0, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05FA8A30, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method));
DO_APP_FUNC(0x05E99A60, float, Vector2_Distance, (Vector2 a, Vector2 b, MethodInfo* method));

DO_APP_FUNC(0x05EDF930, void, Cursor_set_visible, (bool value, MethodInfo* method));
DO_APP_FUNC(0x05EDF920, void, Cursor_set_lockState, (CursorLockMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05EDF910, bool, Cursor_get_visible, (MethodInfo* method));

DO_APP_FUNC(0x05E0C670, void, Rigidbody_set_detectCollisions, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05E0C6C0, void, Rigidbody_set_isKinematic, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05E0C5B0, Vector3, Rigidbody_get_velocity, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x05E0C740, void, Rigidbody_set_velocity, (Rigidbody* __this, Vector3 value, MethodInfo* method));

DO_APP_FUNC(0x05F90470, float, Time_get_timeScale, (MethodInfo* method));
DO_APP_FUNC(0x05F90520, void, Time_set_timeScale, (float value, MethodInfo* method));
DO_APP_FUNC(0x05F90390, float, Time_get_deltaTime, (MethodInfo* method));

DO_APP_FUNC(0x05EE5580, Vector3, Camera_WorldToScreenPoint, (Camera* __this, Vector3 position, MethodInfo* method));
DO_APP_FUNC(0x05EE58B0, Camera*, Camera_get_main, (MethodInfo* method));
DO_APP_FUNC(0x05EE59F0, int32_t, Camera_get_pixelWidth, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x05EE59A0, int32_t, Camera_get_pixelHeight, (Camera* __this, MethodInfo* method));

DO_APP_FUNC(0x05E98750, int32_t, Screen_get_width, (MethodInfo* method));
DO_APP_FUNC(0x05E986E0, int32_t, Screen_get_height, (MethodInfo* method));

DO_APP_FUNC(0x05FA73D0, bool, Behaviour_get_isActiveAndEnabled, (Behaviour* __this, MethodInfo* method));

DO_APP_FUNC(0x05F8FC30, Vector3, Quaternion_ToEulerAngles, (Quaternion rotation, MethodInfo* method));
DO_APP_FUNC(0x05F8FD20, Vector3, Quaternion_get_eulerAngles, (Quaternion__Boxed* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB72B0, Quaternion, Transform_get_rotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05EB4480, Rect, RectTransform_get_rect, (RectTransform* __this, MethodInfo* method));
DO_APP_FUNC(0x05FD7C30, float, Canvas_get_scaleFactor, (/*Canvas**/void* __this, MethodInfo* method));


DO_APP_FUNC(0x03364270, void, LevelTimeManager_SetInternalTimeOfDay, (/*LevelTimeManager**/void* __this, float inHours, bool force, bool refreshEnviroTime, MethodInfo* method));


// Singletons
DO_APP_FUNC(0x00A1E6A0, void*, Singleton_GetInstance, (MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x09ED89D0, Singleton_1_MoleMole_MapModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09ED8FA0, Singleton_1_MoleMole_LoadingManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09ED80F8, Singleton_1_MoleMole_EntityManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09ED8070, Singleton_1_InteractionManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09ED7E78, Singleton_1_MoleMole_UIManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09ED8318, Singleton_1_MoleMole_ItemModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09EDB158, Singleton_1_MoleMole_EventManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09ED8CE8, Singleton_1_MoleMole_PlayerModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09ED9598, Singleton_1_MoleMole_MapManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09EDB7D0, Singleton_1_MoleMole_ScenePropManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09ED8F78, Singleton_1_MoleMole_NetworkManager__get_Instance__MethodInfo);

