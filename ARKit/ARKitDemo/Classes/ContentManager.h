//
//  ContentManager.h
//  ContentManager
//
//  Created by Ben Janik on 10/9/11.
//  Copyright Ben Janik 2013. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface ContentManager : NSObject {
    
    UIViewController	*prevViewController;
	NSMutableArray		*controllerList;
    BOOL debugMode;
    BOOL scaleOnDistance;
    
}

@property (nonatomic, retain) UIViewController  *prevViewController;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property BOOL debugMode;
@property BOOL scaleOnDistance;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

+ (ContentManager *)sharedContentManager;
-(void) goBackFromView:(UIViewController*) currentViewController goBack:(int)popOff;
- (void) goToView:(UIViewController*) toViewController fromView:(UIViewController*) fromViewController;


@end
