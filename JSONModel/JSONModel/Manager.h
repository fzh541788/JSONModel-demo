//
//  Manager.h
//  JSONModel
//
//  Created by young_jerry on 2020/10/18.
//

#import <Foundation/Foundation.h>
#import "TestModel.h"
//块定义 定义一个block 类型的变量 SuccesBlock  为输入参数 其需要参数类型是id 返回值是第二个括号 的块
//这样就可以利用 SuccesBlock进行参数的传递或者是编辑。
typedef void (^TestSucceedBlock)(TestModel * _Nonnull mainViewNowModel);
//失败返回error
typedef void (^ErrorBlock)(NSError * _Nonnull error);

NS_ASSUME_NONNULL_BEGIN

@interface Manager : NSObject

+ (instancetype)sharedManger;

- (void)NetWorkTestWithData:(TestSucceedBlock) succeedBlock error:(ErrorBlock) errorBlock;

@end

NS_ASSUME_NONNULL_END
