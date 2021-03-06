/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/


#ifndef MSGRAPHSERVICEFILEATTACHMENTCOLLECTIONFETCHER_H
#define MSGRAPHSERVICEFILEATTACHMENTCOLLECTIONFETCHER_H

@class MSGraphServiceFileAttachmentFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSGraphServiceModels.h"

/** MSGraphServiceFileAttachmentCollectionFetcher
 *
 */
@interface MSGraphServiceFileAttachmentCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSGraphServiceFileAttachmentFetcher *)getById: (id) identifier;
- (void)add:(MSGraphServiceFileAttachment *)entity callback:(void (^)(MSGraphServiceFileAttachment *, MSOrcError *))callback;

- (MSGraphServiceFileAttachmentCollectionFetcher *)select:(NSString *)params;
- (MSGraphServiceFileAttachmentCollectionFetcher *)filter:(NSString *)params;
- (MSGraphServiceFileAttachmentCollectionFetcher *)search:(NSString *)params;
- (MSGraphServiceFileAttachmentCollectionFetcher *)top:(int)value;
- (MSGraphServiceFileAttachmentCollectionFetcher *)skip:(int)value;
- (MSGraphServiceFileAttachmentCollectionFetcher *)expand:(NSString *)value;
- (MSGraphServiceFileAttachmentCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphServiceFileAttachmentCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceFileAttachmentCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif
