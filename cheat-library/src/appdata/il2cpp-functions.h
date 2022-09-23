// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2017.4.15 - 2017.4.40

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;


// Map hooks
DO_APP_FUNC(0x0343C4D0, void, MoleMole_InLevelMapPageContext_OnMarkClicked, (InLevelMapPageContext* __this, MonoMapMark* mark, MethodInfo* method));
DO_APP_FUNC(0x03453590, void, MoleMole_InLevelMapPageContext_OnMapClicked, (InLevelMapPageContext* __this, Vector2 screenPos, MethodInfo* method));
DO_APP_FUNC(0x0346A180, void, MoleMole_InLevelMapPageContext_ZoomMap, (InLevelMapPageContext* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x03474120, void, MoleMole_InLevelMapPageContext_UpdateView, (InLevelMapPageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x01785DD0, bool, MoleMole_MapModule_IsAreaUnlock, (MoleMole_MapModule* __this, uint32_t sceneID, uint32_t areaID, MethodInfo* method));


// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x02C713F0, uint16_t, MoleMole_SimpleSafeUInt16_get_Value, (SimpleSafeUInt16 v, MethodInfo* method));
DO_APP_FUNC(0x02E22450, uint32_t, MoleMole_SimpleSafeUInt32_get_Value, (SimpleSafeUInt32 v, MethodInfo* method));
DO_APP_FUNC(0x053D27D0, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));


// Map utility
DO_APP_FUNC(0x010E55F0, Rect, MonoInLevelMapPage_get_mapRect, (MonoInLevelMapPage* __this, MethodInfo* method));
DO_APP_FUNC(0x010E55C0, Transform*, MonoInLevelMapPage_get_mapBackground, (MonoInLevelMapPage* __this, MethodInfo* method));


// Teleport hooks
DO_APP_FUNC(0x010A0800, void, GameManager_Update, (GameManager* __this, MethodInfo* method));
DO_APP_FUNC(0x00E04440, void, MoleMole_LoadingManager_SceneGoto, (MoleMole_LoadingManager* __this, PlayerEnterSceneNotify* notify, MethodInfo* method));
DO_APP_FUNC(0x00E08B40, void, MoleMole_LoadingManager_PerformPlayerTransmit, (MoleMole_LoadingManager* __this, Vector3 targetPos, EnterType__Enum enterType, uint32_t token, EvtTransmitAvatar_EvtTransmitAvatar_TransmitType__Enum transType, uint32_t enterReason, MethodInfo* method));
DO_APP_FUNC(0x00E086B0, void, MoleMole_LoadingManager_RequestSceneTransToPoint, (MoleMole_LoadingManager* __this, uint32_t sceneId, uint32_t pointId, void* finishCallBackInForceDrag, MethodInfo* method));
DO_APP_FUNC(0x00E04160, bool, MoleMole_LoadingManager_NeedTransByServer, (MoleMole_LoadingManager* __this, uint32_t sceneId, Vector3 position, MethodInfo* method));
DO_APP_FUNC(0x0341E280, Vector3, MoleMole_LocalEntityInfoData_get_initPos, (LocalEntityInfoData* __this, MethodInfo* method)); // shared offset


// Unlimited stamina
DO_APP_FUNC(0x01B8CDF0, void, MoleMole_LevelSyncCombatPlugin_RequestSceneEntityMoveReq, (LevelSyncCombatPlugin* __this, uint32_t entityId, MotionInfo* syncInfo, bool isReliable, uint32_t HAOCOEMOMBG, MethodInfo* method));
DO_APP_FUNC(0x03D08390, void, MoleMole_DataItem_HandleNormalProp, (DataItem* __this, uint32_t type, int64_t value, DataPropOp__Enum state, MethodInfo* method));


// God mode
DO_APP_FUNC(0x01742AE0, void, VCHumanoidMove_NotifyLandVelocity, (VCHumanoidMove* __this, Vector3 velocity, float reachMaxDownVelocityTime, MethodInfo* method));
DO_APP_FUNC(0x01A061A0, bool, Miscs_CheckTargetAttackable, (BaseEntity* attackerEntity, BaseEntity* targetEntity, MethodInfo* method));
DO_APP_FUNC(0x01B386B0, void, MoleMole_LCBaseCombat_FireBeingHitEvent, (LCBaseCombat* __this, uint32_t attackeeRuntimeID, AttackResult* attackResult, MethodInfo* method));
DO_APP_FUNC(0x00F25970, bool, MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp, (ActorAbilityPlugin* __this, float delay, Object* arg, MethodInfo* method));


// Cooldown cheats
DO_APP_FUNC(0x00ACACA0, bool, MoleMole_HumanoidMoveFSM_CheckSprintCooldown, (/* HumanoidMoveFSM */void* __this, MethodInfo* method));
DO_APP_FUNC(0x021A8320, bool, MoleMole_LCAvatarCombat_IsEnergyMax, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x021A8000, void, MoleMole_LCAvatarCombat_ChangeEnergy_1, (LCAvatarCombat* __this, ElementType__Enum type, float value, DataPropOp__Enum state, MethodInfo* method));
DO_APP_FUNC(0x021AB220, bool, MoleMole_LCAvatarCombat_OnSkillStart, (LCAvatarCombat* __this, uint32_t skillID, float cdMultipler, MethodInfo* method));
DO_APP_FUNC(0x021AAF80, bool, MoleMole_LCAvatarCombat_IsSkillInCD_1, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, MethodInfo* method));
DO_APP_FUNC(0x00F62960, void, MoleMole_ActorAbilityPlugin_AddDynamicFloatWithRange, (MoleMole_ActorAbilityPlugin* __this, String* key, float value, float min, float max, bool forceDoAtRemote, MethodInfo* method));

// Rapid fire
DO_APP_FUNC(0x01B44190, void, MoleMole_LCBaseCombat_DoHitEntity, (LCBaseCombat* __this, uint32_t targetID, AttackResult* attackResult, bool ignoreCheckCanBeHitInMP, MethodInfo* method));
DO_APP_FUNC(0x03637160, void, MoleMole_Formula_CalcAttackResult, (CombatProperty* attackCombatProperty, CombatProperty* defenseCombatProperty, AttackResult* attackResult, BaseEntity* attackerEntity, BaseEntity* attackeeEntity, MethodInfo* method));
DO_APP_FUNC(0x0217D230, void, MoleMole_VCAnimatorEvent_HandleProcessItem, (MoleMole_VCAnimatorEvent* __this, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorEventPatternProcessItem* processItem, AnimatorStateInfo processStateInfo, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_TriggerMode__Enum mode, MethodInfo* method));


// World cheats
DO_APP_FUNC(0x0089FAD0, void, MoleMole_VCMonsterAIController_TryDoSkill, (/* VCMonsterAIController */ void* __this, uint32_t skillID, MethodInfo* method)); // Manual
DO_APP_FUNC(0x00896750, void, MoleMole_LCSelectPickup_AddInteeBtnByID, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x00895110, bool, MoleMole_LCSelectPickup_IsInPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x00895DE0, bool, MoleMole_LCSelectPickup_IsOutPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x03631FC0, void, MoleMole_ItemModule_PickItem, (MoleMole_ItemModule* __this, uint32_t entityID, MethodInfo* method));
DO_APP_FUNC(0x00DED290, void, MoleMole_LevelSceneElementViewPlugin_Tick, (LevelSceneElementViewPlugin* __this, float inDeltaTime, MethodInfo* method));


// Dialog skipping
DO_APP_FUNC(0x01296A20, bool, MoleMole_TalkDialogContext_get_canClick, (TalkDialogContext* __this, MethodInfo* method)); // delete
DO_APP_FUNC(0x01296830, bool, MoleMole_TalkDialogContext_get_canAutoClick, (TalkDialogContext* __this, MethodInfo* method));
DO_APP_FUNC(0x0129A910, void, MoleMole_TalkDialogContext_OnDialogSelectItem, (TalkDialogContext* __this, Notify* notify, MethodInfo* method));
DO_APP_FUNC(0x033A2AC0, void, MoleMole_InLevelCutScenePageContext_OnFreeClick, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x033A32D0, void, MoleMole_InLevelCutScenePageContext_UpdateView, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x0339F980, void, MoleMole_InLevelCutScenePageContext_ClearView, (InLevelCutScenePageContext* __this, MethodInfo* method));
//
// Skip Cutscene | RyujinZX#6666
DO_APP_FUNC(0x03242C60, void, CriwareMediaPlayer_Update, (CriwareMediaPlayer* __this, MethodInfo* method));
DO_APP_FUNC(0x03242A30, void, CriwareMediaPlayer_Skip, (CriwareMediaPlayer* __this, MethodInfo* method));


// Protection bypass
DO_APP_FUNC(0x05C25AC0, Byte__Array*, Application_RecordUserData, (int32_t nType, MethodInfo* method));


// Networking
DO_APP_FUNC(0x015C1570, void, Kcp_KcpNative_kcp_packet_destroy, (KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x015C1360, KcpPacket_1*, Kcp_KcpNative_kcp_packet_create, (uint8_t* data, int32_t len, MethodInfo* method));
DO_APP_FUNC(0x015C19D0, int32_t, Kcp_KcpNative_kcp_client_send_packet, (void* kcp_client, KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x02CF31D0, bool, MoleMole_KcpClient_TryDequeueEvent, (void* __this, ClientKcpEvent* evt, MethodInfo* method));
DO_APP_FUNC(0x020127B0, void, MoleMole_Packet_XorEncrypt, (Byte__Array** bytes, int32_t length, MethodInfo* method));


// Lua functions
DO_APP_FUNC(0x0355B130, Byte__Array*, LuaManager_LoadCustomLuaFile, (LuaManager* __this, String** filePath, bool* recycleBytes, MethodInfo* method));
DO_APP_FUNC(0x042C6190, void, Lua_xlua_pushasciistring, (void* L, String* str, MethodInfo* method));
DO_APP_FUNC(0x02EE7210, void, MoleMole_LuaShellManager_DoString, (void* __this, Byte__Array* byteArray, MethodInfo* method));
DO_APP_FUNC(0x051B0F80, void*, LuaEnv_DoString, (void* __this, Byte__Array* chunk, String* chunkName, void* env, MethodInfo* method));
DO_APP_FUNC(0x02EE6A60, void, MoleMole_LuaShellManager_ReportLuaShellResult, (void* __this, String* type, String* value, MethodInfo* method)); // Anticheat info


// Debug hooks
DO_APP_FUNC(0x01D2DFC0, AttackResult_1*, MoleMole_AttackResult_FillProtoAttackResult, (AttackResult* __this, uint32_t attackerID, uint32_t defenseId, AttackResult_1* protoAttackResult, MethodInfo* method));
DO_APP_FUNC(0x01B8F730, void, MoleMole_LevelSyncCombatPlugin_SendFaceToDir, (void* __this, uint32_t runtimeID, Vector3 forward, MethodInfo* method));
DO_APP_FUNC(0x01EA8CA0, void, MoleMole_BaseEntity_FireEvent, (BaseEntity* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x00F5FA40, bool, MoleMole_ActorAbilityPlugin_OnEvent, (void* __this, BaseEvent* e, MethodInfo* method));


// Kill aura
DO_APP_FUNC(0x02945250, void, MoleMole_EvtCrash_Init, (EvtCrash* __this, uint32_t targetID, MethodInfo* method)); // Manual offset
DO_APP_FUNC(0x00A9DC40, void, MoleMole_EventManager_FireEvent, (MoleMole_EventManager* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x05467510, bool, MoleMole_FixedBoolStack_get_value, (FixedBoolStack* __this, MethodInfo* method));

// 3.0 changed to 'MoleMole_EventHelper_Allocate_5'
DO_APP_FUNC(0x05CFFCA0, EvtCrash*, MoleMole_EventHelper_Allocate_103, (MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x09E8CAF8, MoleMole_EventHelper_Allocate_103__MethodInfo);

DO_APP_FUNC(0x01FA6BC0, void, MoleMole_BaseMoveSyncPlugin_ConvertSyncTaskToMotionInfo, (BaseMoveSyncPlugin* __this, MethodInfo* method));


// Fishing
DO_APP_FUNC(0x01CA14F0, void, MoleMole_FishingModule_RequestFishCastRod, (void* __this, uint32_t baitId, uint32_t rodId, Vector3 pos, uint32_t rodEntityId, MethodInfo* method));

DO_APP_FUNC(0x01CA26D0, void, MoleMole_FishingModule_RequestFishBite, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x01CA3F50, void, MoleMole_FishingModule_OnFishBiteRsp, (void* __this, FishBiteRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x01CA1D80, void, MoleMole_FishingModule_RequestFishBattleBegin, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x01CA3D20, void, MoleMole_FishingModule_OnFishBattleBeginRsp, (void* __this, FishBattleBeginRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x01CA3310, void, MoleMole_FishingModule_RequestFishBattleEnd, (void* __this, FishBattleResult__Enum result, bool isAlwaysBonus, float mxBonusTime, MethodInfo* method));
DO_APP_FUNC(0x01CA28A0, void, MoleMole_FishingModule_OnFishBattleEndRsp, (void* __this, FishBattleEndRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x01CA1830, void, MoleMole_FishingModule_OnExitFishingRsp, (void* __this, void* rsp, MethodInfo* method));
DO_APP_FUNC(0x01CA4600, void, MoleMole_FishingModule_onFishChosenNotify, (void* __this, void* notify, MethodInfo* method));


// Visuals
DO_APP_FUNC(0x02F620D0, void, MoleMole_SCameraModuleInitialize_SetWarningLocateRatio, (SCameraModuleInitialize* __this, double deltaTime, CameraShareData* data, MethodInfo* method));
DO_APP_FUNC(0x0260A880, void, MoleMole_VCBaseSetDitherValue_set_ManagerDitherAlphaValue, (MoleMole_VCBaseSetDitherValue* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x014CE450, void, MoleMole_PlayerModule_EntityAppear, (MoleMole_PlayerModule* __this, Proto_SceneEntityInfo* entity, VisionType__Enum type, uint32_t infoParam, MethodInfo* method));

// Chest Indicator | RyujinZX#6666
DO_APP_FUNC(0x0361FBA0, bool, MoleMole_LCIndicatorPlugin_DoCheck, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x03620BB0, void, MoleMole_LCIndicatorPlugin_ShowIcon, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x03621800, void, MoleMole_LCIndicatorPlugin_HideIcon, (LCIndicatorPlugin* __this, MethodInfo* method));

// Auto Cooking | RyujinZX#6666
DO_APP_FUNC(0x014BF230, void, MoleMole_PlayerModule_RequestPlayerCook, (MoleMole_PlayerModule* __this, uint32_t recipeId, uint32_t avatarId, uint32_t qteQuality, uint32_t count, MethodInfo* method));
DO_APP_FUNC(0x014E1F50, void, MoleMole_PlayerModule_OnPlayerCookRsp, (MoleMole_PlayerModule* __this, PlayerCookRsp* rsp, MethodInfo* method));
DO_APP_FUNC(0x01A6E3A0, void, MoleMole_CookingQtePageContext_UpdateProficiency, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x01A6ECE0, void, MoleMole_CookingQtePageContext_CloseItemGotPanel, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x009FA480, uint32_t, MoleMole_Config_CookRecipeExcelConfig_CheckCookFoodMaxNum, (uint32_t UpdateCookRecipeDic, MethodInfo* method));

// Profile Changer | RyujinZX#6666
DO_APP_FUNC(0x029A5DE0, Button_1*, ProfilePage, (MonoInLevelPlayerProfilePage* __this, MethodInfo* method)); // MonoInLevelPlayerProfilePage_get_logoutButton
DO_APP_FUNC(0x025A4330, void, ProfileEditPage, (MonoFriendInformationDialog* __this, Sprite* value, MethodInfo* method)); // MonoFriendInformationDialog_set_icon

// Custom Weather | RyujinZX#6666
DO_APP_FUNC(0x0325B9F0, bool, EnviroSky_ChangeWeather, (void* /*app::EnviroSky*/ __this, String* weatherPath, float transTime, float ratio, MethodInfo* method));
DO_APP_FUNC(0x007F1090, void* /*app::EnviroSky*/, EnviroSky_get_Instance, (MethodInfo* method));


// Free Camera
DO_APP_FUNC(0x05B9B2F0, float, Camera_get_fieldOfView, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x05B9B760, void, Camera_set_fieldOfView, (Camera* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05B9AA80, void, Camera_CopyFrom, (Camera* __this, Camera* other, MethodInfo* method));

// Game Object, Component, Transform Utility
DO_APP_FUNC(0x05C3E660, GameObject*, GameObject_Find, (String* name, MethodInfo* method));
DO_APP_FUNC(0x05C3E6C0, Component_1*, GameObject_GetComponentByName, (GameObject* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x05C3EBA0, bool, GameObject_get_active, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x05C3EC60, void, GameObject_set_active, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05C3EA60, void, GameObject_SetActive, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05B6BEF0, Transform*, Transform_FindChild, (Transform* __this, String* name, MethodInfo* method));
DO_APP_FUNC(0x05B6BF20, Transform*, Transform_GetChild, (Transform* __this, int32_t index, MethodInfo* method));
DO_APP_FUNC(0x05B4D730, Component_1*, Component_1_GetComponent_1, (Component_1* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x05B4D730, GameObject*, GameObject_CreatePrimitive, (PrimitiveType__Enum type, MethodInfo* method));
DO_APP_FUNC(0x05C3EC40, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6D2C0, Quaternion, Transform_get_localRotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6D760, void, Transform_set_localRotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x05B6D300, Vector3, Transform_get_localScale, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6C100, void, Transform_set_localScale, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05B6D280, Vector3, Transform_get_localPosition, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6D750, void, Transform_set_localPosition, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05C3E5D0, Component_1*, GameObject_AddComponentInternal, (GameObject* __this, String* className, MethodInfo* method));
DO_APP_FUNC(0x05C3E980, Component_1*, GameObject_AddComponent, (GameObject* __this, Type* componentType, MethodInfo* method));
DO_APP_FUNC(0x05B68430, Object_1*, Object_1_Instantiate_2, (Object_1* original, MethodInfo* method));
DO_APP_FUNC(0x05E475C0, Object*, Object_1_Instantiate_5, (Object* original, MethodInfo* method));
DO_APP_FUNC(0x05E475C0, GameObject*, Object_1_Instantiate_10, (GameObject* original, MethodInfo* method));
DO_APP_FUNC(0x05B6D0C0, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B4D8E0, GameObject*, Component_1_get_gameObject, (Component_1* __this, MethodInfo* method));
DO_APP_FUNC(0x05B68860, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method));
DO_APP_FUNC(0x05C69120, Material__Array*, Renderer_GetMaterialArray, (Renderer* __this, MethodInfo* method));
DO_APP_FUNC(0x05B4E8B0, void, Material_set_mainTexture, (Material* __this, Texture* value, MethodInfo* method));
DO_APP_FUNC(0x05C5C820, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method));
DO_APP_FUNC(0x05B6D0F0, Vector3, Transform_get_eulerAngles, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6D640, void, Transform_set_eulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05B6D440, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6D7F0, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05B6D520, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6D860, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05B6D160, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6D690, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05B6D4D0, Quaternion, Transform_get_rotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6C110, void, Transform_set_rotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x05B68130, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x05B680E0, void, Object_1_DestroyImmediate_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x05BF03E0, float, Mathf_Lerp, (float a, float b, float t, MethodInfo* method));
DO_APP_FUNC(0x05C06EE0, float, Input_GetAxis, (String* axisName, MethodInfo* method));


// Utility
DO_APP_FUNC(0x02DA4560, String*, Text_get_text, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x05B75A20, void, Text_set_text, (Text* __this, String* value, MethodInfo* method));
DO_APP_FUNC(0x05B933E0, void, Slider_1_set_minValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05B93360, void, Slider_1_set_maxValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05B934A0, void, Slider_1_set_value, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05C07A40, Rect, Sprite_get_rect, (Sprite* __this, MethodInfo* method));
DO_APP_FUNC(0x05C91170, Texture2D*, NativeGallery_LoadImageAtPath, (String* imagePath, int32_t maxSize, bool markTextureNonReadable, bool generateMipmaps, bool linearColorSpace, MethodInfo* method));
DO_APP_FUNC(0x05C07840, Sprite*, Sprite_Create, (Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, MethodInfo* method));
DO_APP_FUNC(0x05B75530, void, Text_set_alignment, (Text* __this, TextAnchor__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05B757D0, void, Text_set_horizontalOverflow, (Text* __this, HorizontalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05B75AD0, void, Text_set_verticalOverflow, (Text* __this, VerticalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05B75440, bool, Text_get_resizeTextForBestFit, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x05B758A0, void, Text_set_resizeTextForBestFit, (Text* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05B74E10, int32_t, Text_get_fontSize, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x05B75680, void, Text_set_fontSize, (Text* __this, int32_t value, MethodInfo* method));

DO_APP_FUNC(0x01A02A20, float, Miscs_CalcCurrentGroundWaterHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x01A02250, float, Miscs_CalcCurrentGroundHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x01A02360, float, Miscs_CalcCurrentGroundHeight_1, (float x, float z, float rayStartHeight, float rayDetectLength, int32_t layer, MethodInfo* method));
DO_APP_FUNC(0x01A025C0, Vector3, Miscs_CalcCurrentGroundNorm, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x01A0C7C0, Vector3, Miscs_GenWorldPos, (Vector2 levelMapPos, MethodInfo* method));
DO_APP_FUNC(0x01A0C170, Vector2, Miscs_GenLevelPos_1, (Vector3 worldPos, MethodInfo* method));
DO_APP_FUNC(0x01A21140, int32_t, Miscs_GetSceneGroundLayerMask, (MethodInfo* method));

DO_APP_FUNC(0x05116990, Vector3, WorldShiftManager_GetAbsolutePosition, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x05116B40, Vector3, WorldShiftManager_GetRelativePosition, (Vector3 pos, MethodInfo* method));

DO_APP_FUNC(0x01DBD930, Vector3, ActorUtils_GetAvatarPos, (MethodInfo* method));
DO_APP_FUNC(0x01DC5E20, void, ActorUtils_SetAvatarPos, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x01DCBF10, void, ActorUtils_SyncAvatarMotion, (int32_t state, MethodInfo* method));

DO_APP_FUNC(0x025690A0, Notify, Notify_CreateNotify_1, (MoleMole_NotifyTypes__Enum type, Object* body, MethodInfo* method));

// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x02AF4D40, float, MoleMole_SafeFloat_get_Value, (SafeFloat safeFloat, MethodInfo* method));
// should be 'op_Implicit' not 'set_value'
DO_APP_FUNC(0x02AF4BC0, SafeFloat, MoleMole_SafeFloat_set_Value, (float value, MethodInfo* method));

DO_APP_FUNC(0x05D01FB0, LCBaseCombat*, MoleMole_BaseEntity_GetLogicCombatComponent_1, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x09E89BC0, MoleMole_BaseEntity_GetLogicCombatComponent_1__MethodInfo);

DO_APP_FUNC(0x01EA8A30, String*, MoleMole_BaseEntity_ToStringRelease, (BaseEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x01EB5E30, void, MoleMole_BaseEntity_SetRelativePosition, (BaseEntity* __this, Vector3 position, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x01EAA370, void, MoleMole_BaseEntity_SetAbsolutePosition, (BaseEntity* __this, Vector3 abpos, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x01ECB550, Vector3, MoleMole_BaseEntity_GetAbsolutePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x01EAC5B0, Vector3, MoleMole_BaseEntity_GetRelativePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x01ED0810, Vector3, MoleMole_BaseEntity_GetForward, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x01ECF670, Vector3, MoleMole_BaseEntity_GetForwardFast, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x01EC9340, Vector3, MoleMole_BaseEntity_GetRight, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x01EC7B70, Vector3, MoleMole_BaseEntity_GetUp, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x01EB71A0, bool, MoleMole_BaseEntity_IsActive, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x01EA3180, Rigidbody*, MoleMole_BaseEntity_GetRigidbody, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x01EBFF20, Animator*, MoleMole_BaseEntity_get_animator, (BaseEntity* __this, MethodInfo* method));

// type should be 'MoleMole_VCCharacterCombat' not 'MoleMole_VCBaseMove'
// function name should be 'GetVisualCombatComponent_1' not 'GetMoveComponent_1'
DO_APP_FUNC(0x05D01FE0, VCBaseMove*, MoleMole_BaseEntity_GetMoveComponent_1, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x09E8C980, MoleMole_BaseEntity_GetMoveComponent_1__MethodInfo);

DO_APP_FUNC(0x01EAD0B0, List_1_MoleMole_BaseComponent_*, MoleMole_BaseEntity_GetAllLogicComponents, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x01EAAF30, GameObject*, MoleMole_BaseEntity_get_gameObject, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x02A56B00, GameObject*, MoleMole_BaseEntity_get_rootGameObject, (BaseEntity* __this, MethodInfo* method));

// type should be 'MoleMole_AvatarEntity' not 'MoleMole_BaseEntity'
DO_APP_FUNC(0x02A57E10, BaseEntity*, MoleMole_EntityManager_GetLocalAvatarEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x02A51910, CameraEntity*, MoleMole_EntityManager_GetMainCameraEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x02A52800, BaseEntity*, MoleMole_EntityManager_GetValidEntity, (MoleMole_EntityManager* __this, uint32_t runtimeID, MethodInfo* method));
DO_APP_FUNC(0x02A6C7D0, bool, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, uint32_t specifiedRuntimeID, MethodInfo* method));
DO_APP_FUNC(0x02A5D3C0, bool, MoleMole_EntityManager_IsCachedEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x02A56880, List_1_MoleMole_BaseEntity_*, MoleMole_EntityManager_GetEntities, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x049DFB10, Bounds, Utils_4_GetBounds, (GameObject* go, MethodInfo* method));

// Modify | RyujinZX#6666
DO_APP_FUNC(0x00AD3B40, void, MoleMole_HumanoidMoveFSM_LateTick, (HumanoidMoveFSM* __this, float deltaTime, MethodInfo* method));

DO_APP_FUNC(0x03B99550, bool, MoleMole_ScenePropManager_GetTreeTypeByPattern, (MoleMole_ScenePropManager* __this, String* pattern, MoleMole_Config_TreeType__Enum* treeType, MethodInfo* method));
DO_APP_FUNC(0x01EF1930, void, MoleMole_NetworkManager_RequestHitTreeDropNotify, (MoleMole_NetworkManager* __this, Vector3 position, Vector3 hitPostion, MoleMole_Config_TreeType__Enum treeType, MethodInfo* method));
DO_APP_FUNC(0x05CAE730, uint64_t, MoleMole_TimeUtil_get_LocalNowMsTimeStamp, (MethodInfo* method));

DO_APP_FUNC(0x00E06560, bool, MoleMole_LoadingManager_IsLoaded, (MoleMole_LoadingManager* __this, MethodInfo* method));

// Thanks to | RyujinZX
DO_APP_FUNC(0x0143BB60, void, MoleMole_LCAbilityElement_ReduceModifierDurability, (LCAbilityElement* __this, int32_t modifierDurabilityIndex, float reduceDurability, Nullable_1_Single_ deltaTime, MethodInfo* method));

DO_APP_FUNC(0x0218C0F0, BaseEntity*, MoleMole_GadgetEntity_GetOwnerEntity, (GadgetEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x02738030, bool, MoleMole_UIManager_HasEnableMapCamera, (MoleMole_UIManager* __this, MethodInfo* method));
DO_APP_FUNC(0x0272B950, void, MoleMole_UIManager_EnableInput, (MoleMole_UIManager* __this, bool playerInput, bool clearCurInputState, bool ignoreTouch, MethodInfo* method));

DO_APP_FUNC(0x010ED480, void, MonoMiniMap_Update, (MonoMiniMap* __this, MethodInfo* method));
DO_APP_FUNC(0x02DA4900, MonoMiniMap*, MonoInLevelMainPage_get_miniMap, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x02F995B0, void, MoleMole_GadgetModule_OnGadgetInteractRsp, (void* __this, GadgetInteractRsp* notify, MethodInfo* method));
DO_APP_FUNC(0x00CEB400, float, MoleMole_InLevelMainPageContext_get_miniMapScale, (InLevelMainPageContext* __this, MethodInfo* method));


// UnityEngine
DO_APP_FUNC(0x05BF63E0, void, RenderSettings_set_fog, (bool value, MethodInfo* method));
DO_APP_FUNC(0x05C26140, int32_t, Application_get_targetFrameRate, (MethodInfo* method));
DO_APP_FUNC(0x05C26560, void, Application_set_targetFrameRate, (int32_t value, MethodInfo* method));

DO_APP_FUNC(0x05C8BFC0, bool, RectTransformUtility_ScreenPointToLocalPointInRectangle, (void* rect, Vector2 screenPoint, void* cam, Vector2* localPoint, MethodInfo* method));

DO_APP_FUNC(0x05B6D400, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6D7E0, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05C5C3C0, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method));
DO_APP_FUNC(0x05B53D10, float, Vector2_Distance, (Vector2 a, Vector2 b, MethodInfo* method));

DO_APP_FUNC(0x05B95750, bool, Cursor_get_visible, (MethodInfo* method));
DO_APP_FUNC(0x05B95770, void, Cursor_set_visible, (bool value, MethodInfo* method));
DO_APP_FUNC(0x05B95760, void, Cursor_set_lockState, (CursorLockMode__Enum value, MethodInfo* method));

DO_APP_FUNC(0x05AC9390, RigidbodyConstraints__Enum, Rigidbody_get_constraints, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x05AC9560, void, Rigidbody_set_constraints, (Rigidbody* __this, RigidbodyConstraints__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05AC9550, void, Rigidbody_set_collisionDetectionMode, (Rigidbody* __this, CollisionDetectionMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05AC9570, void, Rigidbody_set_detectCollisions, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05AC95C0, void, Rigidbody_set_isKinematic, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05AC94C0, Vector3, Rigidbody_get_velocity, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x05AC9620, void, Rigidbody_set_velocity, (Rigidbody* __this, Vector3 value, MethodInfo* method));

DO_APP_FUNC(0x05C406F0, float, Time_get_timeScale, (MethodInfo* method));
DO_APP_FUNC(0x05C407A0, void, Time_set_timeScale, (float value, MethodInfo* method));
DO_APP_FUNC(0x05C40610, float, Time_get_deltaTime, (MethodInfo* method));

DO_APP_FUNC(0x05B9AFE0, Vector3, Camera_WorldToScreenPoint, (Camera* __this, Vector3 position, MethodInfo* method));
DO_APP_FUNC(0x05B9B310, Camera*, Camera_get_main, (MethodInfo* method));
DO_APP_FUNC(0x05B9B450, int32_t, Camera_get_pixelWidth, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x05B9B400, int32_t, Camera_get_pixelHeight, (Camera* __this, MethodInfo* method));

DO_APP_FUNC(0x05B529D0, int32_t, Screen_get_width, (MethodInfo* method));
DO_APP_FUNC(0x05B52960, int32_t, Screen_get_height, (MethodInfo* method));

DO_APP_FUNC(0x05BD9A10, void, Animator_Play, (Animator* __this, String* stateName, int32_t layer, float normalizedTime, MethodInfo* method));
DO_APP_FUNC(0x05BD9B90, void, Animator_Rebind, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x05BDA0C0, float, Animator_get_speed, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x05BDA1F0, void, Animator_set_speed, (Animator* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x04E513E0, String*, Extension_GetCurrentStateName, (Animator* animator, int32_t layer, AnimatorController* animCont, MethodInfo* method));

DO_APP_FUNC(0x05C5B050, bool, Behaviour_get_isActiveAndEnabled, (Behaviour* __this, MethodInfo* method));

DO_APP_FUNC(0x05C3FE10, Vector3, Quaternion_ToEulerAngles, (Quaternion rotation, MethodInfo* method));
DO_APP_FUNC(0x05C3FF00, Vector3, Quaternion_get_eulerAngles, (Quaternion__Boxed* __this, MethodInfo* method));
DO_APP_FUNC(0x05B6A7A0, Rect, RectTransform_get_rect, (RectTransform* __this, MethodInfo* method));
DO_APP_FUNC(0x05C8B410, float, Canvas_get_scaleFactor, (/*Canvas**/void* __this, MethodInfo* method));


DO_APP_FUNC(0x03066A90, void, LevelTimeManager_SetInternalTimeOfDay, (/*LevelTimeManager**/void* __this, float inHours, bool force, bool refreshEnviroTime, MethodInfo* method));

// Open team immediately
// F3 0F 10 83 ?? ?? ?? ?? 0F 29 74 24 30 F3 0F 10 B3 ?? ?? ?? ?? 
DO_APP_FUNC(0x01387770, bool, MoleMole_InLevelMainPageContext_DoTeamCountDown_c_Iterator0__MoveNext, (InLevelMainPageContext_DoTeamCountDown_Iterator* __this, MethodInfo* method));
DO_APP_FUNC(0x00A1CE30, void, MoleMole_InLevelPlayerProfilePageContext_SetupView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));
DO_APP_FUNC(0x00A15410, void, MoleMole_InLevelPlayerProfilePageContext_ClearView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));


// Singletons
DO_APP_FUNC(0x061A8780, void*, Singleton_GetInstance, (MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x09E89110, Singleton_1_MoleMole_UIManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09E89310, Singleton_1_InteractionManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09E89398, Singleton_1_MoleMole_EntityManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09E895B8, Singleton_1_MoleMole_ItemModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09E89C48, Singleton_1_MoleMole_MapModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09E89F60, Singleton_1_MoleMole_PlayerModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09E8A1F0, Singleton_1_MoleMole_NetworkManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09E8A218, Singleton_1_MoleMole_LoadingManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09E8A810, Singleton_1_MoleMole_MapManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09E8C3A0, Singleton_1_MoleMole_EventManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x09E8CA18, Singleton_1_MoleMole_ScenePropManager__get_Instance__MethodInfo);

