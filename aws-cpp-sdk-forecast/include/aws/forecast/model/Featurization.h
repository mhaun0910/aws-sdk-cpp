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
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/FeaturizationMethod.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides featurization (transformation) information for a dataset field. This
   * object is part of the <a>FeaturizationConfig</a> object.</p> <p>For example:</p>
   * <p> <code>{</code> </p> <p> <code>"AttributeName": "demand",</code> </p> <p>
   * <code>FeaturizationPipeline [ {</code> </p> <p> <code>"FeaturizationMethodName":
   * "filling",</code> </p> <p> <code>"FeaturizationMethodParameters":
   * {"aggregation": "avg", "backfill": "nan"}</code> </p> <p> <code>} ]</code> </p>
   * <p> <code>}</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/Featurization">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API Featurization
  {
  public:
    Featurization();
    Featurization(Aws::Utils::Json::JsonView jsonValue);
    Featurization& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the schema attribute specifying the data field to be featurized.
     * In this release, only the <code>target</code> field of the
     * <code>TARGET_TIME_SERIES</code> dataset type is supported. For example, for the
     * <code>RETAIL</code> domain, the target is <code>demand</code>, and for the
     * <code>CUSTOM</code> domain, the target is <code>target_value</code>.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the schema attribute specifying the data field to be featurized.
     * In this release, only the <code>target</code> field of the
     * <code>TARGET_TIME_SERIES</code> dataset type is supported. For example, for the
     * <code>RETAIL</code> domain, the target is <code>demand</code>, and for the
     * <code>CUSTOM</code> domain, the target is <code>target_value</code>.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the schema attribute specifying the data field to be featurized.
     * In this release, only the <code>target</code> field of the
     * <code>TARGET_TIME_SERIES</code> dataset type is supported. For example, for the
     * <code>RETAIL</code> domain, the target is <code>demand</code>, and for the
     * <code>CUSTOM</code> domain, the target is <code>target_value</code>.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the schema attribute specifying the data field to be featurized.
     * In this release, only the <code>target</code> field of the
     * <code>TARGET_TIME_SERIES</code> dataset type is supported. For example, for the
     * <code>RETAIL</code> domain, the target is <code>demand</code>, and for the
     * <code>CUSTOM</code> domain, the target is <code>target_value</code>.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the schema attribute specifying the data field to be featurized.
     * In this release, only the <code>target</code> field of the
     * <code>TARGET_TIME_SERIES</code> dataset type is supported. For example, for the
     * <code>RETAIL</code> domain, the target is <code>demand</code>, and for the
     * <code>CUSTOM</code> domain, the target is <code>target_value</code>.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the schema attribute specifying the data field to be featurized.
     * In this release, only the <code>target</code> field of the
     * <code>TARGET_TIME_SERIES</code> dataset type is supported. For example, for the
     * <code>RETAIL</code> domain, the target is <code>demand</code>, and for the
     * <code>CUSTOM</code> domain, the target is <code>target_value</code>.</p>
     */
    inline Featurization& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the schema attribute specifying the data field to be featurized.
     * In this release, only the <code>target</code> field of the
     * <code>TARGET_TIME_SERIES</code> dataset type is supported. For example, for the
     * <code>RETAIL</code> domain, the target is <code>demand</code>, and for the
     * <code>CUSTOM</code> domain, the target is <code>target_value</code>.</p>
     */
    inline Featurization& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema attribute specifying the data field to be featurized.
     * In this release, only the <code>target</code> field of the
     * <code>TARGET_TIME_SERIES</code> dataset type is supported. For example, for the
     * <code>RETAIL</code> domain, the target is <code>demand</code>, and for the
     * <code>CUSTOM</code> domain, the target is <code>target_value</code>.</p>
     */
    inline Featurization& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>An array <code>FeaturizationMethod</code> objects that specifies the feature
     * transformation methods. For this release, the number of methods is limited to
     * one.</p>
     */
    inline const Aws::Vector<FeaturizationMethod>& GetFeaturizationPipeline() const{ return m_featurizationPipeline; }

    /**
     * <p>An array <code>FeaturizationMethod</code> objects that specifies the feature
     * transformation methods. For this release, the number of methods is limited to
     * one.</p>
     */
    inline bool FeaturizationPipelineHasBeenSet() const { return m_featurizationPipelineHasBeenSet; }

    /**
     * <p>An array <code>FeaturizationMethod</code> objects that specifies the feature
     * transformation methods. For this release, the number of methods is limited to
     * one.</p>
     */
    inline void SetFeaturizationPipeline(const Aws::Vector<FeaturizationMethod>& value) { m_featurizationPipelineHasBeenSet = true; m_featurizationPipeline = value; }

    /**
     * <p>An array <code>FeaturizationMethod</code> objects that specifies the feature
     * transformation methods. For this release, the number of methods is limited to
     * one.</p>
     */
    inline void SetFeaturizationPipeline(Aws::Vector<FeaturizationMethod>&& value) { m_featurizationPipelineHasBeenSet = true; m_featurizationPipeline = std::move(value); }

    /**
     * <p>An array <code>FeaturizationMethod</code> objects that specifies the feature
     * transformation methods. For this release, the number of methods is limited to
     * one.</p>
     */
    inline Featurization& WithFeaturizationPipeline(const Aws::Vector<FeaturizationMethod>& value) { SetFeaturizationPipeline(value); return *this;}

    /**
     * <p>An array <code>FeaturizationMethod</code> objects that specifies the feature
     * transformation methods. For this release, the number of methods is limited to
     * one.</p>
     */
    inline Featurization& WithFeaturizationPipeline(Aws::Vector<FeaturizationMethod>&& value) { SetFeaturizationPipeline(std::move(value)); return *this;}

    /**
     * <p>An array <code>FeaturizationMethod</code> objects that specifies the feature
     * transformation methods. For this release, the number of methods is limited to
     * one.</p>
     */
    inline Featurization& AddFeaturizationPipeline(const FeaturizationMethod& value) { m_featurizationPipelineHasBeenSet = true; m_featurizationPipeline.push_back(value); return *this; }

    /**
     * <p>An array <code>FeaturizationMethod</code> objects that specifies the feature
     * transformation methods. For this release, the number of methods is limited to
     * one.</p>
     */
    inline Featurization& AddFeaturizationPipeline(FeaturizationMethod&& value) { m_featurizationPipelineHasBeenSet = true; m_featurizationPipeline.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    Aws::Vector<FeaturizationMethod> m_featurizationPipeline;
    bool m_featurizationPipelineHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
