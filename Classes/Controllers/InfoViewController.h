/*****************************************************************************
 ** Copyright (c) 2010 Ushahidi Inc
 ** All rights reserved
 ** Contact: team@ushahidi.com
 ** Website: http://www.ushahidi.com
 **
 ** GNU Lesser General Public License Usage
 ** This file may be used under the terms of the GNU Lesser
 ** General Public License version 3 as published by the Free Software
 ** Foundation and appearing in the file LICENSE.LGPL included in the
 ** packaging of this file. Please review the following information to
 ** ensure the GNU Lesser General Public License version 3 requirements
 ** will be met: http://www.gnu.org/licenses/lgpl.html.
 **
 **
 ** If you have questions regarding the use of this file, please contact
 ** Ushahidi developers at team@ushahidi.com.
 **
 *****************************************************************************/

#import <UIKit/UIKit.h>
#import "TableViewController.h"
#import "TextFieldTableCell.h"
#import "BooleanTableCell.h"
#import "SliderTableCell.h"
#import "Email.h"

@class Email;

@interface InfoViewController : TableViewController<TextFieldTableCellDelegate, 
													BooleanTableCellDelegate, 
													SliderTableCellDelegate,
													UIAlertViewDelegate> {
	
@private
	NSString *userEmail;
	NSString *firstName;
	NSString *lastName;
	BOOL downloadMaps;
	BOOL becomeDiscrete;
	NSInteger mapZoomLevel;
	CGFloat imageWidth;
	Email *email;
}

- (IBAction) cancel:(id)sender;
- (IBAction) done:(id)sender;

@end
