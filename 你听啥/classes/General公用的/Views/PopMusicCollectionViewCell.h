//
//  PopMusicCollectionViewCell.h
//  你听啥
//
//  Created by anyurchao on 15/10/22.
//  Copyright © 2015年 YC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PopMusicCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imgView;
@property (weak, nonatomic) IBOutlet UILabel *labelName;

@property(nonatomic,strong)PopMusic *popMusic;

@end
