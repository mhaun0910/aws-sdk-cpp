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
#include <aws/forecast/model/S3Config.h>
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
   * <p>The destination of an exported forecast and credentials to access the
   * location. This object is submitted in the <a>CreateForecastExportJob</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DataDestination">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API DataDestination
  {
  public:
    DataDestination();
    DataDestination(Aws::Utils::Json::JsonView jsonValue);
    DataDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline void SetS3Config(const S3Config& value) { m_s3ConfigHasBeenSet = true; m_s3Config = value; }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline void SetS3Config(S3Config&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::move(value); }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline DataDestination& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline DataDestination& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}

  private:

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
