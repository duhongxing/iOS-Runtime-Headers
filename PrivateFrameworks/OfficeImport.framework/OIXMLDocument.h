/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OIXMLElement, NSString;



@interface OIXMLDocument : OIXMLNode 
{
    OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)setVersion:(id)arg1;
- (id)initWithRootElement:(id)arg1;
- (void)setRootElement:(id)arg1;
- (id)contentString;
- (id)rootElement;
- (id)closingTagString;
- (id)openingTagString;
- (id)XMLString;
- (void)setCharacterEncoding:(id)arg1;
- (id)createMutableXMLString;

@end