//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Randy Wills on 6/8/14.
//  Copyright (c) 2014 Randy Wills. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
