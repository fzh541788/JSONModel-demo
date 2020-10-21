//
//  TestModel.m
//  JSONModel
//
//  Created by young_jerry on 2020/10/12.
//



//+ (BOOL)propertyIsOptional:(NSString *)propertyName 作用是不想因为服务器的某个值没有返回(nil)就使程序崩溃， 我们会加关键字Optional，如果不想每一条属性都添加，我们也可以在.m文件中重写方法
#import "TestModel.h"
@implementation Top_StoriesModel
+ (BOOL)propertyIsOptional:(NSString *)propertyName {
    return YES;
}
@end

@implementation StoriesModel
+ (BOOL)propertyIsOptional:(NSString *)propertyName {
    return YES;
}
@end

@implementation TestModel
+ (BOOL)propertyIsOptional:(NSString *)propertyName {
    return YES;
}
@end
