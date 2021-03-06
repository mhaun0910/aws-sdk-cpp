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
#include <aws/forecast/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/forecast/model/Statistics.h>
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
  class AWS_FORECASTSERVICE_API DescribeDatasetImportJobResult
  {
  public:
    DescribeDatasetImportJobResult();
    DescribeDatasetImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDatasetImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobName() const{ return m_datasetImportJobName; }

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline void SetDatasetImportJobName(const Aws::String& value) { m_datasetImportJobName = value; }

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline void SetDatasetImportJobName(Aws::String&& value) { m_datasetImportJobName = std::move(value); }

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline void SetDatasetImportJobName(const char* value) { m_datasetImportJobName.assign(value); }

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline DescribeDatasetImportJobResult& WithDatasetImportJobName(const Aws::String& value) { SetDatasetImportJobName(value); return *this;}

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline DescribeDatasetImportJobResult& WithDatasetImportJobName(Aws::String&& value) { SetDatasetImportJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset import job.</p>
     */
    inline DescribeDatasetImportJobResult& WithDatasetImportJobName(const char* value) { SetDatasetImportJobName(value); return *this;}


    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const{ return m_datasetImportJobArn; }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(const Aws::String& value) { m_datasetImportJobArn = value; }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(Aws::String&& value) { m_datasetImportJobArn = std::move(value); }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(const char* value) { m_datasetImportJobArn.assign(value); }

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline DescribeDatasetImportJobResult& WithDatasetImportJobArn(const Aws::String& value) { SetDatasetImportJobArn(value); return *this;}

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline DescribeDatasetImportJobResult& WithDatasetImportJobArn(Aws::String&& value) { SetDatasetImportJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline DescribeDatasetImportJobResult& WithDatasetImportJobArn(const char* value) { SetDatasetImportJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that the training data was
     * imported to.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that the training data was
     * imported to.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that the training data was
     * imported to.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that the training data was
     * imported to.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that the training data was
     * imported to.</p>
     */
    inline DescribeDatasetImportJobResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that the training data was
     * imported to.</p>
     */
    inline DescribeDatasetImportJobResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that the training data was
     * imported to.</p>
     */
    inline DescribeDatasetImportJobResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The format of timestamps in the dataset. Two formats are supported dependent
     * on the <code>DataFrequency</code> specified when the dataset was created.</p>
     * <ul> <li> <p>"yyyy-MM-dd"</p> <p>For data frequencies: Y, M, W, and D</p> </li>
     * <li> <p>"yyyy-MM-dd HH:mm:ss"</p> <p>For data frequencies: H, 30min, 15min, and
     * 1min; and optionally, for: Y, M, W, and D</p> </li> </ul>
     */
    inline const Aws::String& GetTimestampFormat() const{ return m_timestampFormat; }

    /**
     * <p>The format of timestamps in the dataset. Two formats are supported dependent
     * on the <code>DataFrequency</code> specified when the dataset was created.</p>
     * <ul> <li> <p>"yyyy-MM-dd"</p> <p>For data frequencies: Y, M, W, and D</p> </li>
     * <li> <p>"yyyy-MM-dd HH:mm:ss"</p> <p>For data frequencies: H, 30min, 15min, and
     * 1min; and optionally, for: Y, M, W, and D</p> </li> </ul>
     */
    inline void SetTimestampFormat(const Aws::String& value) { m_timestampFormat = value; }

    /**
     * <p>The format of timestamps in the dataset. Two formats are supported dependent
     * on the <code>DataFrequency</code> specified when the dataset was created.</p>
     * <ul> <li> <p>"yyyy-MM-dd"</p> <p>For data frequencies: Y, M, W, and D</p> </li>
     * <li> <p>"yyyy-MM-dd HH:mm:ss"</p> <p>For data frequencies: H, 30min, 15min, and
     * 1min; and optionally, for: Y, M, W, and D</p> </li> </ul>
     */
    inline void SetTimestampFormat(Aws::String&& value) { m_timestampFormat = std::move(value); }

    /**
     * <p>The format of timestamps in the dataset. Two formats are supported dependent
     * on the <code>DataFrequency</code> specified when the dataset was created.</p>
     * <ul> <li> <p>"yyyy-MM-dd"</p> <p>For data frequencies: Y, M, W, and D</p> </li>
     * <li> <p>"yyyy-MM-dd HH:mm:ss"</p> <p>For data frequencies: H, 30min, 15min, and
     * 1min; and optionally, for: Y, M, W, and D</p> </li> </ul>
     */
    inline void SetTimestampFormat(const char* value) { m_timestampFormat.assign(value); }

    /**
     * <p>The format of timestamps in the dataset. Two formats are supported dependent
     * on the <code>DataFrequency</code> specified when the dataset was created.</p>
     * <ul> <li> <p>"yyyy-MM-dd"</p> <p>For data frequencies: Y, M, W, and D</p> </li>
     * <li> <p>"yyyy-MM-dd HH:mm:ss"</p> <p>For data frequencies: H, 30min, 15min, and
     * 1min; and optionally, for: Y, M, W, and D</p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithTimestampFormat(const Aws::String& value) { SetTimestampFormat(value); return *this;}

    /**
     * <p>The format of timestamps in the dataset. Two formats are supported dependent
     * on the <code>DataFrequency</code> specified when the dataset was created.</p>
     * <ul> <li> <p>"yyyy-MM-dd"</p> <p>For data frequencies: Y, M, W, and D</p> </li>
     * <li> <p>"yyyy-MM-dd HH:mm:ss"</p> <p>For data frequencies: H, 30min, 15min, and
     * 1min; and optionally, for: Y, M, W, and D</p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithTimestampFormat(Aws::String&& value) { SetTimestampFormat(std::move(value)); return *this;}

    /**
     * <p>The format of timestamps in the dataset. Two formats are supported dependent
     * on the <code>DataFrequency</code> specified when the dataset was created.</p>
     * <ul> <li> <p>"yyyy-MM-dd"</p> <p>For data frequencies: Y, M, W, and D</p> </li>
     * <li> <p>"yyyy-MM-dd HH:mm:ss"</p> <p>For data frequencies: H, 30min, 15min, and
     * 1min; and optionally, for: Y, M, W, and D</p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithTimestampFormat(const char* value) { SetTimestampFormat(value); return *this;}


    /**
     * <p>The location of the training data to import. The training data must be stored
     * in an Amazon S3 bucket.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The location of the training data to import. The training data must be stored
     * in an Amazon S3 bucket.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSource = value; }

    /**
     * <p>The location of the training data to import. The training data must be stored
     * in an Amazon S3 bucket.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSource = std::move(value); }

    /**
     * <p>The location of the training data to import. The training data must be stored
     * in an Amazon S3 bucket.</p>
     */
    inline DescribeDatasetImportJobResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The location of the training data to import. The training data must be stored
     * in an Amazon S3 bucket.</p>
     */
    inline DescribeDatasetImportJobResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline const Aws::Map<Aws::String, Statistics>& GetFieldStatistics() const{ return m_fieldStatistics; }

    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline void SetFieldStatistics(const Aws::Map<Aws::String, Statistics>& value) { m_fieldStatistics = value; }

    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline void SetFieldStatistics(Aws::Map<Aws::String, Statistics>&& value) { m_fieldStatistics = std::move(value); }

    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline DescribeDatasetImportJobResult& WithFieldStatistics(const Aws::Map<Aws::String, Statistics>& value) { SetFieldStatistics(value); return *this;}

    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline DescribeDatasetImportJobResult& WithFieldStatistics(Aws::Map<Aws::String, Statistics>&& value) { SetFieldStatistics(std::move(value)); return *this;}

    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline DescribeDatasetImportJobResult& AddFieldStatistics(const Aws::String& key, const Statistics& value) { m_fieldStatistics.emplace(key, value); return *this; }

    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline DescribeDatasetImportJobResult& AddFieldStatistics(Aws::String&& key, const Statistics& value) { m_fieldStatistics.emplace(std::move(key), value); return *this; }

    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline DescribeDatasetImportJobResult& AddFieldStatistics(const Aws::String& key, Statistics&& value) { m_fieldStatistics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline DescribeDatasetImportJobResult& AddFieldStatistics(Aws::String&& key, Statistics&& value) { m_fieldStatistics.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline DescribeDatasetImportJobResult& AddFieldStatistics(const char* key, Statistics&& value) { m_fieldStatistics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline DescribeDatasetImportJobResult& AddFieldStatistics(const char* key, const Statistics& value) { m_fieldStatistics.emplace(key, value); return *this; }


    /**
     * <p>The size of the dataset in gigabytes (GB) after completion of the import
     * job.</p>
     */
    inline double GetDataSize() const{ return m_dataSize; }

    /**
     * <p>The size of the dataset in gigabytes (GB) after completion of the import
     * job.</p>
     */
    inline void SetDataSize(double value) { m_dataSize = value; }

    /**
     * <p>The size of the dataset in gigabytes (GB) after completion of the import
     * job.</p>
     */
    inline DescribeDatasetImportJobResult& WithDataSize(double value) { SetDataSize(value); return *this;}


    /**
     * <p>The status of the dataset import job. The status is reflected in the status
     * of the dataset. For example, when the import job status is
     * <code>CREATE_IN_PROGRESS</code>, the status of the dataset is
     * <code>UPDATE_IN_PROGRESS</code>. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the dataset import job. The status is reflected in the status
     * of the dataset. For example, when the import job status is
     * <code>CREATE_IN_PROGRESS</code>, the status of the dataset is
     * <code>UPDATE_IN_PROGRESS</code>. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the dataset import job. The status is reflected in the status
     * of the dataset. For example, when the import job status is
     * <code>CREATE_IN_PROGRESS</code>, the status of the dataset is
     * <code>UPDATE_IN_PROGRESS</code>. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the dataset import job. The status is reflected in the status
     * of the dataset. For example, when the import job status is
     * <code>CREATE_IN_PROGRESS</code>, the status of the dataset is
     * <code>UPDATE_IN_PROGRESS</code>. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the dataset import job. The status is reflected in the status
     * of the dataset. For example, when the import job status is
     * <code>CREATE_IN_PROGRESS</code>, the status of the dataset is
     * <code>UPDATE_IN_PROGRESS</code>. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the dataset import job. The status is reflected in the status
     * of the dataset. For example, when the import job status is
     * <code>CREATE_IN_PROGRESS</code>, the status of the dataset is
     * <code>UPDATE_IN_PROGRESS</code>. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the dataset import job. The status is reflected in the status
     * of the dataset. For example, when the import job status is
     * <code>CREATE_IN_PROGRESS</code>, the status of the dataset is
     * <code>UPDATE_IN_PROGRESS</code>. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithStatus(const char* value) { SetStatus(value); return *this;}


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
    inline DescribeDatasetImportJobResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeDatasetImportJobResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeDatasetImportJobResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>When the dataset import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the dataset import job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the dataset import job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the dataset import job was created.</p>
     */
    inline DescribeDatasetImportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the dataset import job was created.</p>
     */
    inline DescribeDatasetImportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Dependent on the status as follows:</p> <ul> <li> <p>
     * <code>CREATE_PENDING</code> - same as <code>CreationTime</code> </p> </li> <li>
     * <p> <code>CREATE_IN_PROGRESS</code> - the current timestamp</p> </li> <li> <p>
     * <code>ACTIVE</code> or <code>CREATE_FAILED</code> - when the job finished or
     * failed</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>Dependent on the status as follows:</p> <ul> <li> <p>
     * <code>CREATE_PENDING</code> - same as <code>CreationTime</code> </p> </li> <li>
     * <p> <code>CREATE_IN_PROGRESS</code> - the current timestamp</p> </li> <li> <p>
     * <code>ACTIVE</code> or <code>CREATE_FAILED</code> - when the job finished or
     * failed</p> </li> </ul>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>Dependent on the status as follows:</p> <ul> <li> <p>
     * <code>CREATE_PENDING</code> - same as <code>CreationTime</code> </p> </li> <li>
     * <p> <code>CREATE_IN_PROGRESS</code> - the current timestamp</p> </li> <li> <p>
     * <code>ACTIVE</code> or <code>CREATE_FAILED</code> - when the job finished or
     * failed</p> </li> </ul>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>Dependent on the status as follows:</p> <ul> <li> <p>
     * <code>CREATE_PENDING</code> - same as <code>CreationTime</code> </p> </li> <li>
     * <p> <code>CREATE_IN_PROGRESS</code> - the current timestamp</p> </li> <li> <p>
     * <code>ACTIVE</code> or <code>CREATE_FAILED</code> - when the job finished or
     * failed</p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>Dependent on the status as follows:</p> <ul> <li> <p>
     * <code>CREATE_PENDING</code> - same as <code>CreationTime</code> </p> </li> <li>
     * <p> <code>CREATE_IN_PROGRESS</code> - the current timestamp</p> </li> <li> <p>
     * <code>ACTIVE</code> or <code>CREATE_FAILED</code> - when the job finished or
     * failed</p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_datasetImportJobName;

    Aws::String m_datasetImportJobArn;

    Aws::String m_datasetArn;

    Aws::String m_timestampFormat;

    DataSource m_dataSource;

    Aws::Map<Aws::String, Statistics> m_fieldStatistics;

    double m_dataSize;

    Aws::String m_status;

    Aws::String m_message;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
