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
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ForecastService
{
namespace Model
{
  class AWS_FORECASTSERVICE_API DescribeForecastResult
  {
  public:
    DescribeForecastResult();
    DescribeForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The same forecast ARN as given in the request.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }

    /**
     * <p>The same forecast ARN as given in the request.</p>
     */
    inline void SetForecastArn(const Aws::String& value) { m_forecastArn = value; }

    /**
     * <p>The same forecast ARN as given in the request.</p>
     */
    inline void SetForecastArn(Aws::String&& value) { m_forecastArn = std::move(value); }

    /**
     * <p>The same forecast ARN as given in the request.</p>
     */
    inline void SetForecastArn(const char* value) { m_forecastArn.assign(value); }

    /**
     * <p>The same forecast ARN as given in the request.</p>
     */
    inline DescribeForecastResult& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}

    /**
     * <p>The same forecast ARN as given in the request.</p>
     */
    inline DescribeForecastResult& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}

    /**
     * <p>The same forecast ARN as given in the request.</p>
     */
    inline DescribeForecastResult& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}


    /**
     * <p>The name of the forecast.</p>
     */
    inline const Aws::String& GetForecastName() const{ return m_forecastName; }

    /**
     * <p>The name of the forecast.</p>
     */
    inline void SetForecastName(const Aws::String& value) { m_forecastName = value; }

    /**
     * <p>The name of the forecast.</p>
     */
    inline void SetForecastName(Aws::String&& value) { m_forecastName = std::move(value); }

    /**
     * <p>The name of the forecast.</p>
     */
    inline void SetForecastName(const char* value) { m_forecastName.assign(value); }

    /**
     * <p>The name of the forecast.</p>
     */
    inline DescribeForecastResult& WithForecastName(const Aws::String& value) { SetForecastName(value); return *this;}

    /**
     * <p>The name of the forecast.</p>
     */
    inline DescribeForecastResult& WithForecastName(Aws::String&& value) { SetForecastName(std::move(value)); return *this;}

    /**
     * <p>The name of the forecast.</p>
     */
    inline DescribeForecastResult& WithForecastName(const char* value) { SetForecastName(value); return *this;}


    /**
     * <p>The ARN of the predictor used to generate the forecast.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The ARN of the predictor used to generate the forecast.</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArn = value; }

    /**
     * <p>The ARN of the predictor used to generate the forecast.</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArn = std::move(value); }

    /**
     * <p>The ARN of the predictor used to generate the forecast.</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArn.assign(value); }

    /**
     * <p>The ARN of the predictor used to generate the forecast.</p>
     */
    inline DescribeForecastResult& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The ARN of the predictor used to generate the forecast.</p>
     */
    inline DescribeForecastResult& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the predictor used to generate the forecast.</p>
     */
    inline DescribeForecastResult& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}


    /**
     * <p>The ARN of the dataset group that provided the data used to train the
     * predictor.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The ARN of the dataset group that provided the data used to train the
     * predictor.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArn = value; }

    /**
     * <p>The ARN of the dataset group that provided the data used to train the
     * predictor.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArn = std::move(value); }

    /**
     * <p>The ARN of the dataset group that provided the data used to train the
     * predictor.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArn.assign(value); }

    /**
     * <p>The ARN of the dataset group that provided the data used to train the
     * predictor.</p>
     */
    inline DescribeForecastResult& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The ARN of the dataset group that provided the data used to train the
     * predictor.</p>
     */
    inline DescribeForecastResult& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset group that provided the data used to train the
     * predictor.</p>
     */
    inline DescribeForecastResult& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The status of the forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast must be <code>ACTIVE</code> before you can query or export the
     * forecast.</p> </note>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast must be <code>ACTIVE</code> before you can query or export the
     * forecast.</p> </note>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast must be <code>ACTIVE</code> before you can query or export the
     * forecast.</p> </note>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast must be <code>ACTIVE</code> before you can query or export the
     * forecast.</p> </note>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast must be <code>ACTIVE</code> before you can query or export the
     * forecast.</p> </note>
     */
    inline DescribeForecastResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast must be <code>ACTIVE</code> before you can query or export the
     * forecast.</p> </note>
     */
    inline DescribeForecastResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul> <note> <p>The <code>Status</code> of
     * the forecast must be <code>ACTIVE</code> before you can query or export the
     * forecast.</p> </note>
     */
    inline DescribeForecastResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeForecastResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeForecastResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeForecastResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>When the forecast creation task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the forecast creation task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the forecast creation task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the forecast creation task was created.</p>
     */
    inline DescribeForecastResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the forecast creation task was created.</p>
     */
    inline DescribeForecastResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when inference (creating the forecast)
     * starts (status changed to <code>CREATE_IN_PROGRESS</code>), and when inference
     * is complete (status changed to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when inference (creating the forecast)
     * starts (status changed to <code>CREATE_IN_PROGRESS</code>), and when inference
     * is complete (status changed to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when inference (creating the forecast)
     * starts (status changed to <code>CREATE_IN_PROGRESS</code>), and when inference
     * is complete (status changed to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when inference (creating the forecast)
     * starts (status changed to <code>CREATE_IN_PROGRESS</code>), and when inference
     * is complete (status changed to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline DescribeForecastResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when inference (creating the forecast)
     * starts (status changed to <code>CREATE_IN_PROGRESS</code>), and when inference
     * is complete (status changed to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline DescribeForecastResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_forecastArn;

    Aws::String m_forecastName;

    Aws::String m_predictorArn;

    Aws::String m_datasetGroupArn;

    Aws::String m_status;

    Aws::String m_message;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
