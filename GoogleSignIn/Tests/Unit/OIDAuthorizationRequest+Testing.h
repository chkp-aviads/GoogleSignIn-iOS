/*
 * Copyright 2021 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifdef SWIFT_PACKAGE
@import AppAuth;
#else
#import <AppAuth/OIDAuthorizationRequest.h>
#endif

extern NSString * _Nonnull const OIDAuthorizationRequestTestingClientID;
extern NSString * _Nonnull const OIDAuthorizationRequestTestingScope;
extern NSString * _Nonnull const OIDAuthorizationRequestTestingScope2;
extern NSString * _Nonnull const OIDAuthorizationRequestTestingCodeVerifier;

@interface OIDAuthorizationRequest (Testing)

+ (instancetype _Nonnull)testInstance;

+ (instancetype _Nonnull)testInstanceWithNonce:(nullable NSString *)nonce;

@end
