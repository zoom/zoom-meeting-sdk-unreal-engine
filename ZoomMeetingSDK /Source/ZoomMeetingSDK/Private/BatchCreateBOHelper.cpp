// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "BatchCreateBOHelper.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
BatchCreateBOHelper *BatchCreateBOHelper::Create() {
  TUniquePtr<BatchCreateBOHelper> batch_create_bo_helper(
      new BatchCreateBOHelper());
  if (batch_create_bo_helper->Init()) {
    return batch_create_bo_helper.Release();
  }
  return nullptr;
}

BatchCreateBOHelper::BatchCreateBOHelper() : batch_create_bo_helper(nullptr) {}
BatchCreateBOHelper::~BatchCreateBOHelper() {}

bool BatchCreateBOHelper::Init() {
  ZOOM_SDK_NAMESPACE::IBOCreator *pBOCreator = SDKInterfaceWrap::GetInst()
                                                   .GetMeetingService()
                                                   ->GetMeetingBOController()
                                                   ->GetBOCreatorHelper();
  if (pBOCreator) {
    batch_create_bo_helper = pBOCreator->GetBatchCreateBOHelper();
    return true;
  }
  return false;
}

SDKError BatchCreateBOHelper::CreateBOTransactionBegin() {
  return batch_create_bo_helper->CreateBOTransactionBegin();
}

bool BatchCreateBOHelper::AddNewBoToList(const wchar_t *strNewBOName) {
  return batch_create_bo_helper->AddNewBoToList(strNewBOName);
}

SDKError BatchCreateBOHelper::CreateBOTransactionCommit() {
  return batch_create_bo_helper->CreateBoTransactionCommit();
}
END_ZOOM_SDK_UE_NAMESPACE
