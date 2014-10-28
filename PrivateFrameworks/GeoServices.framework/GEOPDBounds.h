/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion;

@interface GEOPDBounds : PBCodable <NSCopying> {
    GEOMapRegion *_displayMapRegion;
    GEOMapRegion *_mapRegion;
}

@property(retain) GEOMapRegion * displayMapRegion;
@property(readonly) BOOL hasDisplayMapRegion;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;

+ (id)boundsInfoForPlaceData:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMapRegion;
- (BOOL)hasDisplayMapRegion;
- (BOOL)hasMapRegion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)writeTo:(id)arg1;

@end