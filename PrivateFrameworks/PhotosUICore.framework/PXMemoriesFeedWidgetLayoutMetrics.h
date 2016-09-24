/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedWidgetLayoutMetrics : PXMemoriesFeedLayoutMetrics {
    struct CGSize { 
        double width; 
        double height; 
    }  _interitemSpacing;
    unsigned int  _numberOfColumns;
    unsigned int  _numberOfRows;
}

@property (nonatomic) struct CGSize { double x1; double x2; } interitemSpacing;
@property (nonatomic) unsigned int numberOfColumns;
@property (nonatomic) unsigned int numberOfRows;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })interitemSpacing;
- (unsigned int)numberOfColumns;
- (unsigned int)numberOfRows;
- (void)setInteritemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberOfColumns:(unsigned int)arg1;
- (void)setNumberOfRows:(unsigned int)arg1;

@end