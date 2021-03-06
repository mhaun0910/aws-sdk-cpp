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

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API DeleteComputeEnvironmentRequest : public BatchRequest
  {
  public:
    DeleteComputeEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteComputeEnvironment"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name or Amazon Resource Name (ARN) of the compute environment to delete.
     * </p>
     */
    inline const Aws::String& GetComputeEnvironment() const{ return m_computeEnvironment; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the compute environment to delete.
     * </p>
     */
    inline bool ComputeEnvironmentHasBeenSet() const { return m_computeEnvironmentHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the compute environment to delete.
     * </p>
     */
    inline void SetComputeEnvironment(const Aws::String& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the compute environment to delete.
     * </p>
     */
    inline void SetComputeEnvironment(Aws::String&& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the compute environment to delete.
     * </p>
     */
    inline void SetComputeEnvironment(const char* value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the compute environment to delete.
     * </p>
     */
    inline DeleteComputeEnvironmentRequest& WithComputeEnvironment(const Aws::String& value) { SetComputeEnvironment(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the compute environment to delete.
     * </p>
     */
    inline DeleteComputeEnvironmentRequest& WithComputeEnvironment(Aws::String&& value) { SetComputeEnvironment(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the compute environment to delete.
     * </p>
     */
    inline DeleteComputeEnvironmentRequest& WithComputeEnvironment(const char* value) { SetComputeEnvironment(value); return *this;}

  private:

    Aws::String m_computeEnvironment;
    bool m_computeEnvironmentHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
