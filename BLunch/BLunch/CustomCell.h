//
//  CustomCell.h
//  BLunch
//
//  Created by Oberst Tanja on 09.10.14.
//  Copyright (c) 2014 Oberst Tanja. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *cellDateLabel;
@property (weak, nonatomic) IBOutlet UILabel *cellMonthLabel;
@property (weak, nonatomic) IBOutlet UILabel *cellNameLabel;

@end
