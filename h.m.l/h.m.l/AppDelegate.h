//
//  AppDelegate.h
//  h.m.l
//
//  Created by Duke Rome on 11/10/18.
//  Copyright © 2018 Z labeL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

