//
//  PPBodyFatModel+Calculate.h
//  Pods
//
//  Created by lefu on 2024/4/26
//  


#import <Foundation/Foundation.h>
#import "PPCalculateKit.h"
#import <PPBaseKit/PPBaseKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface PPBodyFatModel (Calculate)

#pragma mark - 普通构造方法，用于秤端计算

- (instancetype)initWithUserModel:(PPBluetoothDeviceSettingModel *)userModel
                        andWeight:(CGFloat)weight;

/// 4电极
- (instancetype)initWithUserModel:(PPBluetoothDeviceSettingModel *)userModel
                deviceCalcuteType:(PPDeviceCalcuteType)deviceCalcuteType
                        deviceMac:(NSString *)deviceMac
                           weight:(CGFloat)weight
                        heartRate:(NSInteger)heartRate
                     andImpedance:(NSInteger)impedance
                        footLen:(NSInteger)footLen;

/// 8电极
- (instancetype)initWithUserModel:(PPBluetoothDeviceSettingModel *)userModel
                        deviceMac:(NSString *)deviceMac
                           weight:(CGFloat)weight
                        heartRate:(NSInteger)heartRate
                deviceCalcuteType:(PPDeviceCalcuteType)deviceCalcuteType
              Z20KhzLeftArmEnCode:(NSInteger)z20KhzLeftArmEnCode
             Z20KhzRightArmEnCode:(NSInteger)z20KhzRightArmEnCode
              Z20KhzLeftLegEnCode:(NSInteger)z20KhzLeftLegEnCode
             Z20KhzRightLegEnCode:(NSInteger)z20KhzRightLegEnCode
                Z20KhzTrunkEnCode:(NSInteger)z20KhzTrunkEnCode
             Z100KhzLeftArmEnCode:(NSInteger)z100KhzLeftArmEnCode
            Z100KhzRightArmEnCode:(NSInteger)z100KhzRightArmEnCode
             Z100KhzLeftLegEnCode:(NSInteger)z100KhzLeftLegEnCode
            Z100KhzRightLegEnCode:(NSInteger)z100KhzRightLegEnCode
                Z100KhzTrunkEnCode:(NSInteger)z100KhzTrunkEnCode;

/// 拓展4电极-双频参数 可以传其他deviceCalcuteType 和/// 4电极算法一致
- (instancetype)initWithUserModel:(PPBluetoothDeviceSettingModel *)userModel
                deviceCalcuteType:(PPDeviceCalcuteType)deviceCalcuteType
                        deviceMac:(NSString *)deviceMac
                           weight:(CGFloat)weight
                        heartRate:(NSInteger)heartRate
                     andImpedance:(NSInteger)impedance
               impedance100EnCode:(NSInteger)impedance100EnCode
                        footLen:(NSInteger)footLen;

@end


NS_ASSUME_NONNULL_END

