/*
 * MediaType.h
 * restfulie-objectivec
 *
 * Created by Bruno Fuster on 1/3/11.
 * 
 * Copyright (c) 2009 Caelum - www.caelum.com.br/opensource
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

@protocol MediaType
-(id)unmarshall:(NSString*)content forClient:(id)client;
-(id)marshall:(id)object forClient:(id)client;
-(void)include:(NSString*)key withClass:(Class)clazz;
-(void)exclude:(NSString*)key;
@end

