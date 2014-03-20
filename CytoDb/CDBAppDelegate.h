//
//  CDBAppDelegate.h
//  CytoDb
//
//  Created by Bobby on 3/10/14.
//  Copyright (c) 2014 Rifter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CDBAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
/*
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
*/

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
