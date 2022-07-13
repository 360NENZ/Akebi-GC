// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2017.4.15 - 2017.4.40

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;


// Map hooks
DO_APP_FUNC(0x0352BE50, void, MoleMole_InLevelMapPageContext_OnMarkClicked, (InLevelMapPageContext* __this, MonoMapMark* mark, MethodInfo* method)); //
DO_APP_FUNC(0x0353E4A0, void, MoleMole_InLevelMapPageContext_OnMapClicked, (InLevelMapPageContext* __this, Vector2 screenPos, MethodInfo* method)); //
DO_APP_FUNC(0x00B6AD00, bool, MoleMole_MapModule_IsAreaUnlock, (MoleMole_MapModule* __this, uint32_t sceneID, uint32_t areaID, MethodInfo* method)); //


// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x02355C90, uint16_t, MoleMole_SimpleSafeUInt16_get_Value, (SimpleSafeUInt16 v, MethodInfo* method)); //
DO_APP_FUNC(0x02B0AE10, uint32_t, MoleMole_SimpleSafeUInt32_get_Value, (SimpleSafeUInt32 v, MethodInfo* method)); //
DO_APP_FUNC(0x05FDB430, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method)); // 


// Map utility
DO_APP_FUNC(0x0168F4D0, Rect, MonoInLevelMapPage_get_mapRect, (MonoInLevelMapPage* __this, MethodInfo* method)); //
DO_APP_FUNC(0x0168F4A0, Transform*, MonoInLevelMapPage_get_mapBackground, (MonoInLevelMapPage* __this, MethodInfo* method)); //


// Teleport hooks
DO_APP_FUNC(0x0164CCB0, void, GameManager_Update, (GameManager* __this, MethodInfo* method)); //
DO_APP_FUNC(0x00ABA0E0, void, MoleMole_LoadingManager_SceneGoto, (MoleMole_LoadingManager* __this, PlayerEnterSceneNotify* notify, MethodInfo* method)); //
DO_APP_FUNC(0x00AB96C0, void, MoleMole_LoadingManager_PerformPlayerTransmit, (MoleMole_LoadingManager* __this, Vector3 targetPos, EnterType__Enum enterType, uint32_t token, EvtTransmitAvatar_EvtTransmitAvatar_TransmitType__Enum transType, uint32_t enterReason, MethodInfo* method)); //
DO_APP_FUNC(0x00AB58A0, void, MoleMole_LoadingManager_RequestSceneTransToPoint, (MoleMole_LoadingManager* __this, uint32_t sceneId, uint32_t pointId, void* finishCallBackInForceDrag, MethodInfo* method)); //
DO_APP_FUNC(0x00ABC910, bool, MoleMole_LoadingManager_NeedTransByServer, (MoleMole_LoadingManager* __this, uint32_t sceneId, Vector3 position, MethodInfo* method)); //
DO_APP_FUNC(0x0243DC70, Vector3, MoleMole_LocalEntityInfoData_get_initPos, (LocalEntityInfoData* __this, MethodInfo* method)); //


//// Unlimited stamina
DO_APP_FUNC(0x01A88A30, void, MoleMole_LevelSyncCombatPlugin_RequestSceneEntityMoveReq, (LevelSyncCombatPlugin* __this, uint32_t entityId, MotionInfo* syncInfo, bool isReliable, uint32_t HAOCOEMOMBG, MethodInfo* method)); //
DO_APP_FUNC(0x0398BCC0, void, MoleMole_DataItem_HandleNormalProp, (DataItem* __this, uint32_t type, int64_t value, DataPropOp__Enum state, MethodInfo* method)); // 


// God mode
DO_APP_FUNC(0x02A6B570, void, VCHumanoidMove_NotifyLandVelocity, (VCHumanoidMove* __this, Vector3 velocity, float reachMaxDownVelocityTime, MethodInfo* method)); //
DO_APP_FUNC(0x0279C090, bool, Miscs_CheckTargetAttackable, (BaseEntity* attackerEntity, BaseEntity* targetEntity, MethodInfo* method)); //
DO_APP_FUNC(0x02C3C9F0, void, MoleMole_LCBaseCombat_FireBeingHitEvent, (LCBaseCombat* __this, uint32_t attackeeRuntimeID, AttackResult* attackResult, MethodInfo* method)); //
DO_APP_FUNC(0x02DCB3C0, bool, MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp, (ActorAbilityPlugin* __this, float delay, Object* arg, MethodInfo* method));// **


// Cooldown cheats
DO_APP_FUNC(0x011637D0, bool, MoleMole_HumanoidMoveFSM_CheckSprintCooldown, (/* HumanoidMoveFSM */void* __this, MethodInfo* method)); //
DO_APP_FUNC(0x026F07B0, bool, MoleMole_LCAvatarCombat_IsEnergyMax, (void* __this, MethodInfo* method)); //
DO_APP_FUNC(0x026F0490, void, MoleMole_LCAvatarCombat_ChangeEnergy_1, (LCAvatarCombat* __this, ElementType__Enum type, float value, DataPropOp__Enum state, MethodInfo* method)); //
DO_APP_FUNC(0x026F1340, bool, MoleMole_LCAvatarCombat_OnSkillStart, (LCAvatarCombat* __this, uint32_t skillID, float cdMultipler, MethodInfo* method)); //
DO_APP_FUNC(0x026F5410, bool, MoleMole_LCAvatarCombat_IsSkillInCD_1, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, MethodInfo* method)); //

DO_APP_FUNC(0x02DB3FD0, void, MoleMole_ActorAbilityPlugin_AddDynamicFloatWithRange, (void* __this, String* key, float value, float min, float max, bool forceDoAtRemote, MethodInfo* method)); //

// Rapid fire
DO_APP_FUNC(0x017B0EE0, void, MoleMole_LCBaseCombat_DoHitEntity, (LCBaseCombat* __this, uint32_t targetID, AttackResult* attackResult, bool ignoreCheckCanBeHitInMP, MethodInfo* method)); //
DO_APP_FUNC(0x019DD130, void, MoleMole_Formula_CalcAttackResult, (CombatProperty* attackCombatProperty, CombatProperty* defenseCombatProperty, AttackResult* attackResult, BaseEntity* attackerEntity, BaseEntity* attackeeEntity, MethodInfo* method)); //


// World cheats
DO_APP_FUNC(0x01A77180, void, MoleMole_VCMonsterAIController_TryDoSkill, (/* VCMonsterAIController */ void* __this, uint32_t skillID, MethodInfo* method)); // Manual //
DO_APP_FUNC(0x02A847E0, void, MoleMole_LCSelectPickup_AddInteeBtnByID, (void* __this, BaseEntity* entity, MethodInfo* method)); //
DO_APP_FUNC(0x02A863A0, bool, MoleMole_LCSelectPickup_IsInPosition, (void* __this, BaseEntity* entity, MethodInfo* method)); //
DO_APP_FUNC(0x02A85A30, bool, MoleMole_LCSelectPickup_IsOutPosition, (void* __this, BaseEntity* entity, MethodInfo* method)); //
DO_APP_FUNC(0x0350D260, void, MoleMole_ItemModule_PickItem, (MoleMole_ItemModule* __this, uint32_t entityID, MethodInfo* method)); //
DO_APP_FUNC(0x00916390, void, MoleMole_LevelSceneElementViewPlugin_Tick, (LevelSceneElementViewPlugin* __this, float inDeltaTime, MethodInfo* method)); //


// Dialog skipping
DO_APP_FUNC(0x032AED60, bool, MoleMole_TalkDialogContext_get_canClick, (TalkDialogContext* __this, MethodInfo* method)); // delete //
DO_APP_FUNC(0x032B0960, bool, MoleMole_TalkDialogContext_get_canAutoClick, (TalkDialogContext* __this, MethodInfo* method)); //
DO_APP_FUNC(0x032AD1D0, void, MoleMole_TalkDialogContext_OnDialogSelectItem, (TalkDialogContext* __this, Notify* notify, MethodInfo* method)); //
DO_APP_FUNC(0x03CF5B90, void, MoleMole_InLevelCutScenePageContext_OnFreeClick, (InLevelCutScenePageContext* __this, MethodInfo* method)); //
DO_APP_FUNC(0x03CF7480, void, MoleMole_InLevelCutScenePageContext_UpdateView, (InLevelCutScenePageContext* __this, MethodInfo* method)); //
DO_APP_FUNC(0x03CF5190, void, MoleMole_InLevelCutScenePageContext_ClearView, (InLevelCutScenePageContext* __this, MethodInfo* method)); //
// Skip Cutscene | RyujinZX#6666
DO_APP_FUNC(0x014C3920, void, CriwareMediaPlayer_Update, (CriwareMediaPlayer* __this, MethodInfo* method)); //
DO_APP_FUNC(0x014C36F0, void, CriwareMediaPlayer_Skip, (CriwareMediaPlayer* __this, MethodInfo* method)); //


// Protection bypass
DO_APP_FUNC(0x0688D860, Byte__Array*, Application_RecordUserData, (int32_t nType, MethodInfo* method)); //


// Networking
DO_APP_FUNC(0x0193B8D0, void, Kcp_KcpNative_kcp_packet_destroy, (KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x0193B9E0, KcpPacket_1*, Kcp_KcpNative_kcp_packet_create, (uint8_t* data, int32_t len, MethodInfo* method));
DO_APP_FUNC(0x0193BA70, int32_t, Kcp_KcpNative_kcp_client_send_packet, (void* kcp_client, KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x029EF820, bool, MoleMole_KcpClient_TryDequeueEvent, (void* __this, ClientKcpEvent* evt, MethodInfo* method));
DO_APP_FUNC(0x018280A0, void, MoleMole_Packet_XorEncrypt, (Byte__Array** bytes, int32_t length, MethodInfo* method));


// Lua functions
DO_APP_FUNC(0x010B0140, Byte__Array*, LuaManager_LoadCustomLuaFile, (LuaManager* __this, String** filePath, bool* recycleBytes, MethodInfo* method)); //
DO_APP_FUNC(0x03ACCA30, void, Lua_xlua_pushasciistring, (void* L, String* str, MethodInfo* method)); //
DO_APP_FUNC(0x00E5EB70, void, MoleMole_LuaShellManager_DoString, (void* __this, Byte__Array* byteArray, MethodInfo* method)); //
DO_APP_FUNC(0x063D96A0, void*, LuaEnv_DoString, (void* __this, Byte__Array* chunk, String* chunkName, void* env, MethodInfo* method)); //
DO_APP_FUNC(0x00E5E040, void, MoleMole_LuaShellManager_ReportLuaShellResult, (void* __this, String* type, String* value, MethodInfo* method)); // Anticheat info //


// Debug hooks
DO_APP_FUNC(0x02C2E230, AttackResult_1*, MoleMole_AttackResult_FillProtoAttackResult, (AttackResult* __this, uint32_t attackerID, uint32_t defenseId, AttackResult_1* protoAttackResult, MethodInfo* method)); //
DO_APP_FUNC(0x01A873A0, void, MoleMole_LevelSyncCombatPlugin_SendFaceToDir, (void* __this, uint32_t runtimeID, Vector3 forward, MethodInfo* method)); //
DO_APP_FUNC(0x031A7AE0, void, MoleMole_BaseEntity_FireEvent, (BaseEntity* __this, BaseEvent* e, bool immediately, MethodInfo* method)); //
DO_APP_FUNC(0x02DE3220, bool, MoleMole_ActorAbilityPlugin_OnEvent, (void* __this, BaseEvent* e, MethodInfo* method)); //


// Kill aura
DO_APP_FUNC(0x01012870, void, MoleMole_EvtCrash_Init, (EvtCrash* __this, uint32_t targetID, MethodInfo* method)); // Manual offset //
DO_APP_FUNC(0x016C31A0, void, MoleMole_EventManager_FireEvent, (MoleMole_EventManager* __this, BaseEvent* e, bool immediately, MethodInfo* method)); //
DO_APP_FUNC(0x06087DA0, bool, MoleMole_FixedBoolStack_get_value, (FixedBoolStack* __this, MethodInfo* method)); //

// 2.8 changed to 'MoleMole_EventHelper_Allocate_144'
DO_APP_FUNC(0x03898E00, EvtCrash*, MoleMole_EventHelper_Allocate_103, (MethodInfo* method)); //
DO_APP_FUNC_METHODINFO(0x09A4E0F0, MoleMole_EventHelper_Allocate_103__MethodInfo);

DO_APP_FUNC(0x017F2F70, void, MoleMole_BaseMoveSyncPlugin_ConvertSyncTaskToMotionInfo, (BaseMoveSyncPlugin* __this, MethodInfo* method)); //


// Fishing
DO_APP_FUNC(0x02695210, void, MoleMole_FishingModule_RequestFishCastRod, (void* __this, uint32_t baitId, uint32_t rodId, Vector3 pos, uint32_t rodEntityId, MethodInfo* method)); //

DO_APP_FUNC(0x026981E0, void, MoleMole_FishingModule_RequestFishBite, (void* __this, MethodInfo* method)); //
DO_APP_FUNC(0x02696040, void, MoleMole_FishingModule_OnFishBiteRsp, (void* __this, FishBiteRsp* rsp, MethodInfo* method)); // 

DO_APP_FUNC(0x02695420, void, MoleMole_FishingModule_RequestFishBattleBegin, (void* __this, MethodInfo* method));// 
DO_APP_FUNC(0x026982E0, void, MoleMole_FishingModule_OnFishBattleBeginRsp, (void* __this, FishBattleBeginRsp* rsp, MethodInfo* method)); //

DO_APP_FUNC(0x026945E0, void, MoleMole_FishingModule_RequestFishBattleEnd, (void* __this, FishBattleResult__Enum result, bool isAlwaysBonus, float mxBonusTime, MethodInfo* method)); //
DO_APP_FUNC(0x02694950, void, MoleMole_FishingModule_OnFishBattleEndRsp, (void* __this, FishBattleEndRsp* rsp, MethodInfo* method)); //

DO_APP_FUNC(0x02694770, void, MoleMole_FishingModule_OnExitFishingRsp, (void* __this, void* rsp, MethodInfo* method)); //
DO_APP_FUNC(0x026967A0, void, MoleMole_FishingModule_onFishChosenNotify, (void* __this, void* notify, MethodInfo* method)); //


// Visuals
DO_APP_FUNC(0x03AA1990, void, MoleMole_SCameraModuleInitialize_SetWarningLocateRatio, (SCameraModuleInitialize* __this, double deltaTime, CameraShareData* data, MethodInfo* method)); //
DO_APP_FUNC(0x008DFB20, void, MoleMole_VCBaseSetDitherValue_set_ManagerDitherAlphaValue, (MoleMole_VCBaseSetDitherValue* __this, float value, MethodInfo* method)); //

//// Chest Indicator | RyujinZX#6666
DO_APP_FUNC(0x00F1D9A0, bool, MoleMole_LCIndicatorPlugin_DoCheck, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x00F1DDC0, void, MoleMole_LCIndicatorPlugin_ShowIcon, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x00F1F120, void, MoleMole_LCIndicatorPlugin_HideIcon, (LCIndicatorPlugin* __this, MethodInfo* method));

// Auto Cooking | RyujinZX#6666
DO_APP_FUNC(0x02981830, void, MoleMole_PlayerModule_RequestPlayerCook, (MoleMole_PlayerModule* __this, uint32_t recipeId, uint32_t avatarId, uint32_t qteQuality, uint32_t count, MethodInfo* method)); //
DO_APP_FUNC(0x0298F7A0, void, MoleMole_PlayerModule_OnPlayerCookRsp, (MoleMole_PlayerModule* __this, PlayerCookRsp* rsp, MethodInfo* method)); //
DO_APP_FUNC(0x012C3120, void, MoleMole_CookingQtePageContext_UpdateProficiency, (CookingQtePageContext* __this, MethodInfo* method)); //
DO_APP_FUNC(0x017652B0, uint32_t, MoleMole_Config_CookRecipeExcelConfig_CheckCookFoodMaxNum, (uint32_t UpdateCookRecipeDic, MethodInfo* method)); //
DO_APP_FUNC(0x012BBAF0, void, CookingQtePageContext_CloseItemGotPanel, (CookingQtePageContext* __this, MethodInfo* method)); //

// Profile Changer | RyujinZX#6666
DO_APP_FUNC(0x02A37230, Button_1*, ProfilePage, (MonoInLevelPlayerProfilePage* __this, MethodInfo* method)); // MonoInLevelPlayerProfilePage_get_logoutButton //
DO_APP_FUNC(0x01B0F0F0, void, ProfileEditPage, (MonoFriendInformationDialog* __this, Sprite* value, MethodInfo* method)); // MonoFriendInformationDialog_set_icon // 

// Free Camera
DO_APP_FUNC(0x067F35E0, float, Camera_get_fieldOfView, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x067F3A40, void, Camera_set_fieldOfView, (Camera* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x067F2D20, void, Camera_CopyFrom, (Camera* __this, Camera* other, MethodInfo* method));

// Game Object, Component, Transform Utility
DO_APP_FUNC(0x06899FA0, GameObject*, GameObject_Find, (String* name, MethodInfo* method)); //
DO_APP_FUNC(0x06899FB0, Component_1*, GameObject_GetComponentByName, (GameObject* __this, String* type, MethodInfo* method)); //
DO_APP_FUNC(0x0689A4D0, bool, GameObject_get_active, (GameObject* __this, MethodInfo* method)); //
DO_APP_FUNC(0x0689A590, void, GameObject_set_active, (GameObject* __this, bool value, MethodInfo* method)); //
DO_APP_FUNC(0x0689A390, void, GameObject_SetActive, (GameObject* __this, bool value, MethodInfo* method)); //
DO_APP_FUNC(0x067C47C0, Transform*, Transform_GetChild, (Transform* __this, int32_t index, MethodInfo* method)); //
DO_APP_FUNC(0x067A3830, Component_1*, Component_1_GetComponent_1, (Component_1* __this, String* type, MethodInfo* method)); //
DO_APP_FUNC(0x06899F70, GameObject*, GameObject_CreatePrimitive, (PrimitiveType__Enum type, MethodInfo* method)); //
DO_APP_FUNC(0x0689A570, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method)); // 
DO_APP_FUNC(0x067C5B60, Quaternion, Transform_get_localRotation, (Transform* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C49C0, void, Transform_set_localRotation, (Transform* __this, Quaternion value, MethodInfo* method)); //
DO_APP_FUNC(0x067C5BA0, Vector3, Transform_get_localScale, (Transform* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C49D0, void, Transform_set_localScale, (Transform* __this, Vector3 value, MethodInfo* method)); //
DO_APP_FUNC(0x067C5B20, Vector3, Transform_get_localPosition, (Transform* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C49B0, void, Transform_set_localPosition, (Transform* __this, Vector3 value, MethodInfo* method)); //
DO_APP_FUNC(0x06899F00, Component_1*, GameObject_AddComponentInternal, (GameObject* __this, String* className, MethodInfo* method)); //
DO_APP_FUNC(0x06899F10, Component_1*, GameObject_AddComponent, (GameObject* __this, Type* componentType, MethodInfo* method)); //
DO_APP_FUNC(0x067C09A0, void, Object_1_DestroyImmediate_1, (Object_1* obj, MethodInfo* method)); //
DO_APP_FUNC(0x067C0CF0, Object_1*, Object_1_Instantiate_2, (Object_1* original, MethodInfo* method)); //
DO_APP_FUNC(0x03F82FA0, Object*, Object_1_Instantiate_5, (Object* original, MethodInfo* method)); //
DO_APP_FUNC(0x03F82FA0, GameObject*, Object_1_Instantiate_10, (GameObject* original, MethodInfo* method)); //
DO_APP_FUNC(0x067C5970, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067A39E0, GameObject*, Component_1_get_gameObject, (Component_1* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C1110, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method)); //
DO_APP_FUNC(0x068C5950, Material__Array*, Renderer_GetMaterialArray, (Renderer* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067A49B0, void, Material_set_mainTexture, (Material* __this, Texture* value, MethodInfo* method)); //
DO_APP_FUNC(0x068B9910, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method)); //
DO_APP_FUNC(0x067C5990, Vector3, Transform_get_eulerAngles, (Transform* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C5ED0, void, Transform_set_eulerAngles, (Transform* __this, Vector3 value, MethodInfo* method)); //
DO_APP_FUNC(0x067C5CE0, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C6050, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method)); //
DO_APP_FUNC(0x067C5DC0, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C60D0, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method)); //
DO_APP_FUNC(0x067C5A00, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C5F20, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method)); //
DO_APP_FUNC(0x067C60C0, void, Transform_set_rotation, (Transform* __this, Quaternion value, MethodInfo* method));  //
DO_APP_FUNC(0x068469A0, float, Mathf_Lerp, (float a, float b, float t, MethodInfo* method));  //
DO_APP_FUNC(0x0685A4F0, float, Input_GetAxis, (String* axisName, MethodInfo* method));  //
DO_APP_FUNC(0x067C09F0, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method)); //


// Utility
DO_APP_FUNC(0x0392C0C0, String*, Text_get_text, (Text* __this, MethodInfo* method)); // 
DO_APP_FUNC(0x067CE330, void, Text_set_text, (Text* __this, String* value, MethodInfo* method));  //  
DO_APP_FUNC(0x067EBB80, void, Slider_1_set_minValue, (Slider_1* __this, float value, MethodInfo* method));  //  
DO_APP_FUNC(0x067EBB00, void, Slider_1_set_maxValue, (Slider_1* __this, float value, MethodInfo* method));  // 
DO_APP_FUNC(0x067EBC40, void, Slider_1_set_value, (Slider_1* __this, float value, MethodInfo* method)); //
DO_APP_FUNC(0x0685B050, Rect, Sprite_get_rect, (Sprite* __this, MethodInfo* method));  // 
DO_APP_FUNC(0x068E6D00, Texture2D*, NativeGallery_LoadImageAtPath, (String* imagePath, int32_t maxSize, bool markTextureNonReadable, bool generateMipmaps, bool linearColorSpace, MethodInfo* method));  // 
DO_APP_FUNC(0x0685AEB0, Sprite*, Sprite_Create, (Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, MethodInfo* method));
DO_APP_FUNC(0x067CDE40, void, Text_set_alignment, (Text* __this, TextAnchor__Enum value, MethodInfo* method));  // 
DO_APP_FUNC(0x067CE0E0, void, Text_set_horizontalOverflow, (Text* __this, HorizontalWrapMode__Enum value, MethodInfo* method));  // 
DO_APP_FUNC(0x067CE3E0, void, Text_set_verticalOverflow, (Text* __this, VerticalWrapMode__Enum value, MethodInfo* method));  // 
DO_APP_FUNC(0x067CDD50, bool, Text_get_resizeTextForBestFit, (Text* __this, MethodInfo* method));  // 
DO_APP_FUNC(0x067CE1B0, void, Text_set_resizeTextForBestFit, (Text* __this, bool value, MethodInfo* method));  // 
DO_APP_FUNC(0x067CD690, int32_t, Text_get_fontSize, (Text* __this, MethodInfo* method));  // 
DO_APP_FUNC(0x067CDF90, void, Text_set_fontSize, (Text* __this, int32_t value, MethodInfo* method)); // 

DO_APP_FUNC(0x02798930, float, Miscs_CalcCurrentGroundWaterHeight, (float x, float z, MethodInfo* method));  // 
DO_APP_FUNC(0x02798160, float, Miscs_CalcCurrentGroundHeight, (float x, float z, MethodInfo* method));  // 
DO_APP_FUNC(0x02798270, float, Miscs_CalcCurrentGroundHeight_1, (float x, float z, float rayStartHeight, float rayDetectLength, int32_t layer, MethodInfo* method));  // 
DO_APP_FUNC(0x027984D0, Vector3, Miscs_CalcCurrentGroundNorm, (Vector3 pos, MethodInfo* method));  // 
DO_APP_FUNC(0x027A26B0, Vector3, Miscs_GenWorldPos, (Vector2 levelMapPos, MethodInfo* method));  // 
DO_APP_FUNC(0x027A2190, Vector2, Miscs_GenLevelPos_1, (Vector3 worldPos, MethodInfo* method));  // 
DO_APP_FUNC(0x027B6DF0, int32_t, Miscs_GetSceneGroundLayerMask, (MethodInfo* method));  // 

DO_APP_FUNC(0x05C91770, Vector3, WorldShiftManager_GetAbsolutePosition, (Vector3 pos, MethodInfo* method)); //
DO_APP_FUNC(0x05C91920, Vector3, WorldShiftManager_GetRelativePosition, (Vector3 pos, MethodInfo* method)); //

DO_APP_FUNC(0x01F6A580, Vector3, ActorUtils_GetAvatarPos, (MethodInfo* method)); //
DO_APP_FUNC(0x01F70D10, void, ActorUtils_SetAvatarPos, (Vector3 pos, MethodInfo* method)); //
DO_APP_FUNC(0x01F738E0, void, ActorUtils_SyncAvatarMotion, (int32_t state, MethodInfo* method)); //

DO_APP_FUNC(0x02B86790, Notify, Notify_CreateNotify_1, (MoleMole_NotifyTypes__Enum type, Object* body, MethodInfo* method)); //

// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x0228E750, float, MoleMole_SafeFloat_get_Value, (SafeFloat safeFloat, MethodInfo* method)); //
// should be 'op_Implicit' not 'set_value'
DO_APP_FUNC(0x0228E850, SafeFloat, MoleMole_SafeFloat_set_Value, (float value, MethodInfo* method)); //

DO_APP_FUNC(0x038A6980, LCBaseCombat*, MoleMole_BaseEntity_GetLogicCombatComponent_1, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC_METHODINFO(0x099D41F0, MoleMole_BaseEntity_GetLogicCombatComponent_1__MethodInfo);

DO_APP_FUNC(0x031ABF50, String*, MoleMole_BaseEntity_ToStringRelease, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC(0x0317FD60, void, MoleMole_BaseEntity_SetRelativePosition, (BaseEntity* __this, Vector3 position, bool forceSyncToRigidbody, MethodInfo* method)); //
DO_APP_FUNC(0x0319C9E0, void, MoleMole_BaseEntity_SetAbsolutePosition, (BaseEntity* __this, Vector3 abpos, bool forceSyncToRigidbody, MethodInfo* method)); //
DO_APP_FUNC(0x031A9270, Vector3, MoleMole_BaseEntity_GetAbsolutePosition, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC(0x03189590, Vector3, MoleMole_BaseEntity_GetRelativePosition, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC(0x031962A0, Vector3, MoleMole_BaseEntity_GetForward, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC(0x0319ADF0, Vector3, MoleMole_BaseEntity_GetForwardFast, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC(0x03186D90, Vector3, MoleMole_BaseEntity_GetRight, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC(0x03184F20, Vector3, MoleMole_BaseEntity_GetUp, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC(0x031A4230, bool, MoleMole_BaseEntity_IsActive, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC(0x031AF010, Rigidbody*, MoleMole_BaseEntity_GetRigidbody, (BaseEntity* __this, MethodInfo* method)); //

// type should be 'MoleMole_VCCharacterCombat' not 'MoleMole_VCBaseMove'
// function name should be 'GetVisualCombatComponent' not 'GetMoveComponent'
DO_APP_FUNC(0x038A6850, VCBaseMove*, MoleMole_BaseEntity_GetMoveComponent_1, (BaseEntity* __this, MethodInfo* method)); // 
DO_APP_FUNC_METHODINFO(0x099DB8C8, MoleMole_BaseEntity_GetMoveComponent_1__MethodInfo);

DO_APP_FUNC(0x031873D0, List_1_MoleMole_BaseComponent_*, MoleMole_BaseEntity_GetAllLogicComponents, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC(0x01E3D3E0, GameObject*, MoleMole_BaseEntity_get_gameObject, (BaseEntity* __this, MethodInfo* method)); //
DO_APP_FUNC(0x031A2690, GameObject*, MoleMole_BaseEntity_get_rootGameObject, (BaseEntity* __this, MethodInfo* method)); //

// type should be 'MoleMole_AvatarEntity' not 'MoleMole_BaseEntity'
DO_APP_FUNC(0x02F5DE50, BaseEntity*, MoleMole_EntityManager_GetLocalAvatarEntity, (MoleMole_EntityManager* __this, MethodInfo* method)); //

DO_APP_FUNC(0x02F56920, CameraEntity*, MoleMole_EntityManager_GetMainCameraEntity, (MoleMole_EntityManager* __this, MethodInfo* method)); //
DO_APP_FUNC(0x02F67F40, BaseEntity*, MoleMole_EntityManager_GetValidEntity, (MoleMole_EntityManager* __this, uint32_t runtimeID, MethodInfo* method)); //
// should be: DO_APP_FUNC(0x02F5F490, void, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager * __this, bool entity, MethodInfo * method));
DO_APP_FUNC(0x02F5F120, bool, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, uint32_t specifiedRuntimeID, MethodInfo* method)); //
DO_APP_FUNC(0x02F606B0, bool, MoleMole_EntityManager_IsCachedEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, MethodInfo* method)); //
DO_APP_FUNC(0x02F65210, List_1_MoleMole_BaseEntity_*, MoleMole_EntityManager_GetEntities, (MoleMole_EntityManager* __this, MethodInfo* method)); //
DO_APP_FUNC(0x04A2F710, Bounds, Utils_4_GetBounds, (GameObject* go, MethodInfo* method)); //

// Modify | RyujinZX#6666
DO_APP_FUNC(0x0116BB50, void, MoleMole_HumanoidMoveFSM_LateTick, (HumanoidMoveFSM* __this, float deltaTime, MethodInfo* method)); //

DO_APP_FUNC(0x013B7120, bool, MoleMole_ScenePropManager_GetTreeTypeByPattern, (MoleMole_ScenePropManager* __this, String* pattern, MoleMole_Config_TreeType__Enum* treeType, MethodInfo* method)); //
DO_APP_FUNC(0x018C4B30, void, MoleMole_NetworkManager_RequestHitTreeDropNotify, (MoleMole_NetworkManager* __this, Vector3 position, Vector3 hitPostion, MoleMole_Config_TreeType__Enum treeType, MethodInfo* method)); //
// function should be 'MoleMole_TimeUtil_get_LocalNowMsTimeStamp'
DO_APP_FUNC(0x0266BA30, uint64_t, MoleMole_TimeUtil_get_NowTimeStamp, (MethodInfo* method)); //

DO_APP_FUNC(0x00AB55B0, bool, MoleMole_LoadingManager_IsLoaded, (MoleMole_LoadingManager* __this, MethodInfo* method)); //

// Thanks to | RyujinZX
DO_APP_FUNC(0x00D87910, void, MoleMole_LCAbilityElement_ReduceModifierDurability, (LCAbilityElement* __this, int32_t modifierDurabilityIndex, float reduceDurability, Nullable_1_Single_ deltaTime, MethodInfo* method)); //

DO_APP_FUNC(0x023AFF30, BaseEntity*, MoleMole_GadgetEntity_GetOwnerEntity, (GadgetEntity* __this, MethodInfo* method)); //

DO_APP_FUNC(0x035372F0, void, MoleMole_InLevelMapPageContext_ZoomMap, (InLevelMapPageContext* __this, float value, MethodInfo* method)); //
DO_APP_FUNC(0x0356EE40, void, MoleMole_InLevelMapPageContext_UpdateView, (InLevelMapPageContext* __this, MethodInfo* method)); //

DO_APP_FUNC(0x014A8980, bool, MoleMole_UIManager_HasEnableMapCamera, (MoleMole_UIManager* __this, MethodInfo* method)); //

DO_APP_FUNC(0x01697630, void, MonoMiniMap_Update, (MonoMiniMap* __this, MethodInfo* method)); //
DO_APP_FUNC(0x01645EA0, MonoMiniMap*, MonoInLevelMainPage_get_miniMap, (void* __this, MethodInfo* method)); //
DO_APP_FUNC(0x0265BDE0, void, MoleMole_GadgetModule_OnGadgetInteractRsp, (void* __this, GadgetInteractRsp* notify, MethodInfo* method)); //
DO_APP_FUNC(0x009E9B10, float, MoleMole_InLevelMainPageContext_get_miniMapScale, (InLevelMainPageContext* __this, MethodInfo* method)); //


// UnityEngine
DO_APP_FUNC(0x068516E0, void, RenderSettings_set_fog, (bool value, MethodInfo* method)); //
DO_APP_FUNC(0x0688DD20, int32_t, Application_get_targetFrameRate, (MethodInfo* method)); //
DO_APP_FUNC(0x0688DF80, void, Application_set_targetFrameRate, (int32_t value, MethodInfo* method)); //

DO_APP_FUNC(0x068E1DF0, bool, RectTransformUtility_ScreenPointToLocalPointInRectangle, (void* rect, Vector2 screenPoint, void* cam, Vector2* localPoint, MethodInfo* method)); //

DO_APP_FUNC(0x067C5CA0, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C49E0, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method)); //
DO_APP_FUNC(0x068B94B0, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method)); //
DO_APP_FUNC(0x067A9E20, float, Vector2_Distance, (Vector2 a, Vector2 b, MethodInfo* method)); //

DO_APP_FUNC(0x067EDF10, void, Cursor_set_visible, (bool value, MethodInfo* method)); //
DO_APP_FUNC(0x067EDF00, void, Cursor_set_lockState, (CursorLockMode__Enum value, MethodInfo* method)); //
DO_APP_FUNC(0x067EDEF0, bool, Cursor_get_visible, (MethodInfo* method)); //

DO_APP_FUNC(0x06728AE0, void, Rigidbody_set_detectCollisions, (Rigidbody* __this, bool value, MethodInfo* method)); //
DO_APP_FUNC(0x06728B20, void, Rigidbody_set_isKinematic, (Rigidbody* __this, bool value, MethodInfo* method)); //
DO_APP_FUNC(0x06728A20, Vector3, Rigidbody_get_velocity, (Rigidbody* __this, MethodInfo* method)); //
DO_APP_FUNC(0x06728B80, void, Rigidbody_set_velocity, (Rigidbody* __this, Vector3 value, MethodInfo* method)); //

DO_APP_FUNC(0x0689BFE0, float, Time_get_timeScale, (MethodInfo* method)); //
DO_APP_FUNC(0x0689C090, void, Time_set_timeScale, (float value, MethodInfo* method)); //
DO_APP_FUNC(0x0689BF00, float, Time_get_deltaTime, (MethodInfo* method)); //

DO_APP_FUNC(0x067F32D0, Vector3, Camera_WorldToScreenPoint, (Camera* __this, Vector3 position, MethodInfo* method)); //
DO_APP_FUNC(0x067F3600, Camera*, Camera_get_main, (MethodInfo* method)); //
DO_APP_FUNC(0x067F3740, int32_t, Camera_get_pixelWidth, (Camera* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067F36F0, int32_t, Camera_get_pixelHeight, (Camera* __this, MethodInfo* method)); //

DO_APP_FUNC(0x067A8AE0, int32_t, Screen_get_width, (MethodInfo* method)); //
DO_APP_FUNC(0x067A8A70, int32_t, Screen_get_height, (MethodInfo* method)); //

DO_APP_FUNC(0x068B8020, bool, Behaviour_get_isActiveAndEnabled, (Behaviour* __this, MethodInfo* method)); //

DO_APP_FUNC(0x0689B540, Vector3, Quaternion_ToEulerAngles, (Quaternion rotation, MethodInfo* method)); //
DO_APP_FUNC(0x0689B810, Vector3, Quaternion_get_eulerAngles, (Quaternion__Boxed* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C5D70, Quaternion, Transform_get_rotation, (Transform* __this, MethodInfo* method)); //
DO_APP_FUNC(0x067C3030, Rect, RectTransform_get_rect, (RectTransform* __this, MethodInfo* method)); // 
DO_APP_FUNC(0x068E1240, float, Canvas_get_scaleFactor, (/*Canvas**/void* __this, MethodInfo* method)); //


DO_APP_FUNC(0x00E3D480, void, LevelTimeManager_SetInternalTimeOfDay, (/*LevelTimeManager**/void* __this, float inHours, bool force, bool refreshEnviroTime, MethodInfo* method)); //


// Singletons
DO_APP_FUNC(0x051C5B40, void*, Singleton_GetInstance, (MethodInfo* method)); //
DO_APP_FUNC_METHODINFO(0x099D08E8, Singleton_1_MoleMole_MapModule__get_Instance__MethodInfo); //
DO_APP_FUNC_METHODINFO(0x099D2400, Singleton_1_MoleMole_LoadingManager__get_Instance__MethodInfo); //
DO_APP_FUNC_METHODINFO(0x099CFD30, Singleton_1_MoleMole_EntityManager__get_Instance__MethodInfo); //
DO_APP_FUNC_METHODINFO(0x099D2F70, Singleton_1_InteractionManager__get_Instance__MethodInfo); //
DO_APP_FUNC_METHODINFO(0x099CFD58, Singleton_1_MoleMole_UIManager__get_Instance__MethodInfo); //
DO_APP_FUNC_METHODINFO(0x099DDCE0, Singleton_1_MoleMole_ItemModule__get_Instance__MethodInfo); //
DO_APP_FUNC_METHODINFO(0x099CFD40, Singleton_1_MoleMole_EventManager__get_Instance__MethodInfo); //
DO_APP_FUNC_METHODINFO(0x099D0350, Singleton_1_MoleMole_PlayerModule__get_Instance__MethodInfo); //
DO_APP_FUNC_METHODINFO(0x099D3F10, Singleton_1_MoleMole_MapManager__get_Instance__MethodInfo); //
DO_APP_FUNC_METHODINFO(0x099D1A88, Singleton_1_MoleMole_ScenePropManager__get_Instance__MethodInfo); //
DO_APP_FUNC_METHODINFO(0x099D47B0, Singleton_1_MoleMole_NetworkManager__get_Instance__MethodInfo); //
