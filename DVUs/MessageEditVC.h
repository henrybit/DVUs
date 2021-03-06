//
//  MessageEditVC.h
//  DVUs
//
//  Created by pan Shiyu on 13-10-10.
//  Copyright (c) 2013年 pan Shiyu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataCenter.h"

@interface MessageEditVC : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate>

@property (nonatomic,strong)IBOutlet UITextField *titleTextfield;
@property (nonatomic,strong)IBOutlet UITextView *contentTextview;
@property (nonatomic,strong)IBOutlet UILabel *timeLabel;
@property (nonatomic,strong)IBOutlet UICollectionView *faceCollectionView;

@property (nonatomic,strong) DVMessage *outMessage;

- (IBAction)onBack;
- (IBAction)onUpdate;

- (IBAction)onAddFriend;

- (IBAction)onValueChanged:(UISlider*)sender;

@end


@interface FaceCell : UICollectionViewCell
@property (nonatomic,weak)DVFriend *refFriend;
@property (nonatomic,strong)IBOutlet UIImageView *faceImageview;
@end
