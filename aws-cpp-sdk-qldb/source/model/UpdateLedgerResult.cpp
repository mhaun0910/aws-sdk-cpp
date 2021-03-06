﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/qldb/model/UpdateLedgerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateLedgerResult::UpdateLedgerResult() : 
    m_state(LedgerState::NOT_SET),
    m_deletionProtection(false)
{
}

UpdateLedgerResult::UpdateLedgerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(LedgerState::NOT_SET),
    m_deletionProtection(false)
{
  *this = result;
}

UpdateLedgerResult& UpdateLedgerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = LedgerStateMapper::GetLedgerStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

  }

  if(jsonValue.ValueExists("DeletionProtection"))
  {
    m_deletionProtection = jsonValue.GetBool("DeletionProtection");

  }



  return *this;
}
