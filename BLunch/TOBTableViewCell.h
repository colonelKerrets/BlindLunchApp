//
//  TOBTableViewCell.h
//  BLunch
//
//  Created by Oberst Tanja on 09.10.14.
//  Copyright (c) 2014 Oberst Tanja. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TOBTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *dateLabel;
@property (nonatomic, weak) IBOutlet UILabel *monthLabel;
@property (nonatomic, weak) IBOutlet UILabel *nameLabel;

@end
