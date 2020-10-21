//
//  TestModel.h
//  JSONModel
//
//  Created by young_jerry on 2020/10/12.
//
@protocol StoriesModel
@end

@protocol Top_StoriesModel
@end

#import "JSONModel.h"

NS_ASSUME_NONNULL_BEGIN
@interface StoriesModel : JSONModel
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *ga_prefix;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *image_hue;
@property (nonatomic, copy) NSString *id;
@end

@interface Top_StoriesModel : JSONModel
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *ga_prefix;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *image_hue;
@property (nonatomic, copy) NSString *id;
@end

@interface TestModel : JSONModel
@property (nonatomic, copy) NSString *date;
@property (nonatomic, copy) NSArray<StoriesModel> *stories;
@property (nonatomic, copy) NSArray<Top_StoriesModel> *top_stories;
//
//@property (nonatomic, assign) int status;
//@property (nonatomic, copy) NSString *msg;
//@property (nonatomic, copy) NSString *latest;

@end

NS_ASSUME_NONNULL_END
