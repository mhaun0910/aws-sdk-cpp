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
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/lex/LexRuntimeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lex/model/DialogAction.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

  /**
   */
  class AWS_LEXRUNTIMESERVICE_API PutSessionRequest : public LexRuntimeServiceRequest
  {
  public:
    PutSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSession"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}


    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline PutSessionRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline PutSessionRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline PutSessionRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }


    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline const DialogAction& GetDialogAction() const{ return m_dialogAction; }

    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline bool DialogActionHasBeenSet() const { return m_dialogActionHasBeenSet; }

    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline void SetDialogAction(const DialogAction& value) { m_dialogActionHasBeenSet = true; m_dialogAction = value; }

    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline void SetDialogAction(DialogAction&& value) { m_dialogActionHasBeenSet = true; m_dialogAction = std::move(value); }

    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline PutSessionRequest& WithDialogAction(const DialogAction& value) { SetDialogAction(value); return *this;}

    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline PutSessionRequest& WithDialogAction(DialogAction&& value) { SetDialogAction(std::move(value)); return *this;}


    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline PutSessionRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline PutSessionRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline PutSessionRequest& WithAccept(const char* value) { SetAccept(value); return *this;}

  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet;

    DialogAction m_dialogAction;
    bool m_dialogActionHasBeenSet;

    Aws::String m_accept;
    bool m_acceptHasBeenSet;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
