//
//  custom cellTableViewCell.h
//  catch crisis
//
//  Created by Jason M McCoy on 13/04/2015.
//  Copyright (c) 2015 VLADU BOGDAN DANIEL PFA. All rights reserved.
/*this program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.*/

#import <UIKit/UIKit.h>

@interface custom_cellTableViewCell : UITableViewCell


@property (strong, nonatomic) IBOutlet UILabel *name;
@property (strong, nonatomic) IBOutlet UILabel *points;
@property (strong, nonatomic) IBOutlet UIImageView *myimage;

@end
