//
//  ViewController.m
//  JSONModel
//
//  Created by young_jerry on 2020/10/12.
//

#import "ViewController.h"
#import "TestModel.h"
//#import "JSONModel.h"
#import "Manager.h"

@interface ViewController ()
//@property (nonatomic, copy) StoriesModel *stories;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self test];
}

-(void)test{
    [[Manager sharedManger] NetWorkTestWithData:^(TestModel * _Nonnull mainViewNowModel) {
        NSLog(@"%@",mainViewNowModel.stories[0]);
            NSLog(@"请求成功");
        } error:^(NSError * _Nonnull error) {
            NSLog(@"请求失败");
        }];
}
@end
