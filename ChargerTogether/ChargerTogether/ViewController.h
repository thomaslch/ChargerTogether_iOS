//
//  ViewController.h
//  ChargerTogether
//
//  Created by testing on 6/6/2015.
//  Copyright (c) 2015年 pcms.invonationTeam. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController <MKMapViewDelegate> {
	IBOutlet MKMapView *_mapView;
	MKPointAnnotation *_myPin;
	UIView *_menuView;
	
	int _menuViewLimitationMax;
	int _menuViewLimitationMin;
	
	CGFloat differences;
}

- (void)handleNotification:(NSNotification *)notification;

@end