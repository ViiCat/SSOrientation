//
//  ViewControllerB1.h
//  Orientation
//
//  Created by Jason.Liu on 16/12/28.
//  Copyright © 2016年 ViiCat.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewControllerB1 : UIViewController

///是否允许使用强制将interface旋转成device的方向
@property(nonatomic, assign)BOOL attemptRotationToDeviceOrientation;

@property(nonatomic, strong)IBOutlet UIButton * btnGotoB2;

- (IBAction)pushToViewControllerB2:(id)sender;
@end
