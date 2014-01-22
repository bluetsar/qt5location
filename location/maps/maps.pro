TEMPLATE = lib
QT+=positioning gui widgets

include(../../3rdparty/proj.pri) 

PUBLIC_HEADERS += \
     ../qgeoboundingcircle.h\
     ../qgeoboundingarea.h\
     ../qgeoplace.h \
     ../qgeoaddress.h \
     qlatin1constant.h \
     ../qgeoboundingbox.h

SOURCES += \
     ../qgeoboundingarea.cpp \
     ../qgeoboundingbox.cpp \
     ../qgeoplace.cpp \
     ../qgeoaddress.cpp \
     ../qgeoboundingcircle.cpp \
     qlatin1constant.cpp \
     ../projwrapper_p.cpp



PRIVATE_HEADERS += \
     ../qgeoboundingcircle_p.h\
     ../qgeoboundingbox_p.h \
     ../qgeoplace_p.h \
     ../qgeoaddress_p.h \
     ../projwrapper_p.h


INCLUDEPATH += .. tiled

PUBLIC_HEADERS += \
                    tiled/qgeotiledmapdata.h \
                    tiled/qgeotiledmappingmanagerengine.h \
                    tiled/qgeotiledmapreply.h \
                    tiled/qgeotiledmaprequest.h

PRIVATE_HEADERS += \
                    tiled/qgeotiledmapdata_p.h \
                    tiled/qgeotiledmapobjectinfo_p.h \
                    tiled/qgeotiledmapcircleobjectinfo_p.h \
                    tiled/qgeotiledmapcustomobjectinfo_p.h \
                    tiled/qgeotiledmapgroupobjectinfo_p.h \
                    tiled/qgeotiledmappixmapobjectinfo_p.h \
                    tiled/qgeotiledmappolygonobjectinfo_p.h \
                    tiled/qgeotiledmappolylineobjectinfo_p.h \
                    tiled/qgeotiledmaprectangleobjectinfo_p.h \
                    tiled/qgeotiledmaprouteobjectinfo_p.h \
                    tiled/qgeotiledmaptextobjectinfo_p.h \
                    tiled/qgeotiledmappingmanagerengine_p.h \
                    tiled/qgeotiledmapreply_p.h \
                    tiled/qgeotiledmaprequest_p.h

SOURCES += \
                    tiled/qgeotiledmapdata.cpp \
                    tiled/qgeotiledmapobjectinfo_p.cpp \
                    tiled/qgeotiledmapcircleobjectinfo_p.cpp \
                    tiled/qgeotiledmapcustomobjectinfo_p.cpp \
                    tiled/qgeotiledmapgroupobjectinfo_p.cpp \
                    tiled/qgeotiledmappixmapobjectinfo_p.cpp \
                    tiled/qgeotiledmappolygonobjectinfo_p.cpp \ 
                    tiled/qgeotiledmappolylineobjectinfo_p.cpp \
                    tiled/qgeotiledmaprectangleobjectinfo_p.cpp \
                    tiled/qgeotiledmaprouteobjectinfo_p.cpp \
                    tiled/qgeotiledmaptextobjectinfo_p.cpp \
                    tiled/qgeotiledmappingmanagerengine.cpp \
                    tiled/qgeotiledmapreply.cpp \
                    tiled/qgeotiledmaprequest.cpp


PUBLIC_HEADERS += \
                    qgeomaneuver.h \
                    qgeomapcircleobject.h \
                    qgeomapcustomobject.h \
                    qgeomapdata.h \
                    qgeomapgroupobject.h \
                    qgeomapobject.h \
                    qgeomapobjectinfo.h \
                    qgeomapoverlay.h \
                    qgeomappingmanager.h \
                    qgeomappingmanagerengine.h \
                    qgeomappixmapobject.h \
                    qgeomappolygonobject.h \
                    qgeomappolylineobject.h \
                    qgeomaprectangleobject.h \
                    qgeomaprouteobject.h \
                    qgeomaptextobject.h \
                    qgeoroute.h \
                    qgeoroutereply.h \
                    qgeorouterequest.h \
                    qgeoroutesegment.h \
                    qgeoroutingmanager.h \
                    qgeoroutingmanagerengine.h \
#                    qgeosearchmanager.h \
#                    qgeosearchmanagerengine.h \
#                    qgeosearchreply.h \
                    qgeoserviceprovider.h \
                    qgeoserviceproviderfactory.h \
                    qgraphicsgeomap.h

PRIVATE_HEADERS += \
                    qgeomaneuver_p.h \
                    qgeomapcircleobject_p.h \
                    qgeomapcustomobject_p.h \
                    qgeomapdata_p.h \
                    qgeomapgroupobject_p.h \
                    qgeomapobject_p.h \
                    qgeomapobjectinfo_p.h \
                    qgeomapoverlay_p.h \
                    qgeomappingmanager_p.h \
                    qgeomappingmanagerengine_p.h \
                    qgeomappixmapobject_p.h \
                    qgeomappolygonobject_p.h \
                    qgeomappolylineobject_p.h \
                    qgeomaprectangleobject_p.h \
                    qgeomaprouteobject_p.h \
                    qgeomaptextobject_p.h \
                    qgeoroute_p.h \
                    qgeoroutereply_p.h \
                    qgeorouterequest_p.h \
                    qgeoroutesegment_p.h \
                    qgeoroutingmanager_p.h \
                    qgeoroutingmanagerengine_p.h \
                    qgeosearchmanager_p.h \
                    qgeosearchmanagerengine_p.h \
                    qgeosearchreply_p.h \
                    qgeoserviceprovider_p.h \
                    qgraphicsgeomap_p.h \
                    qgeomapobjectengine_p.h

SOURCES += \
            qgeomaneuver.cpp \
            qgeomapcircleobject.cpp \
            qgeomapcustomobject.cpp \
            qgeomapdata.cpp \
            qgeomapgroupobject.cpp \
            qgeomapobject.cpp \
            qgeomapoverlay.cpp \
            qgeomappingmanager.cpp \
            qgeomappingmanagerengine.cpp \
            qgeomappixmapobject.cpp \
            qgeomappolygonobject.cpp \
            qgeomappolylineobject.cpp \
            qgeomaprectangleobject.cpp \
            qgeomaprouteobject.cpp \
            qgeomaptextobject.cpp \
            qgeoroute.cpp \
            qgeoroutereply.cpp \
            qgeorouterequest.cpp \
            qgeoroutesegment.cpp \
            qgeoroutingmanager.cpp \
            qgeoroutingmanagerengine.cpp \
          qgeosearchmanager.cpp \
          qgeosearchmanagerengine.cpp \
            qgeosearchreply.cpp \
            qgeoserviceprovider.cpp \
            qgeoserviceproviderfactory.cpp \
            qgraphicsgeomap.cpp \
            qgeomapobjectinfo.cpp \
            qgeomapobjectengine_p.cpp


INCLUDEPATH += ../landmarks

PUBLIC_HEADERS += \
                    ../landmarks/qlandmark.h \
                    ../landmarks/qlandmarkabstractrequest.h \
                    ../landmarks/qlandmarkattributefilter.h \
                    ../landmarks/qlandmarkboxfilter.h \
                    ../landmarks/qlandmarkcategory.h \
                    ../landmarks/qlandmarkcategoryfetchrequest.h \
                    ../landmarks/qlandmarkcategoryfetchbyidrequest.h \
                    ../landmarks/qlandmarkcategoryfilter.h \
                    ../landmarks/qlandmarkcategoryid.h \
                    ../landmarks/qlandmarkcategoryidfetchrequest.h \
                    ../landmarks/qlandmarkcategoryremoverequest.h \
                    ../landmarks/qlandmarkcategorysaverequest.h \
                    ../landmarks/qlandmarkexportrequest.h \
                    ../landmarks/qlandmarkfetchrequest.h \
                    ../landmarks/qlandmarkfetchbyidrequest.h \
                    ../landmarks/qlandmarkfilter.h \
                    ../landmarks/qlandmarkid.h \
                    ../landmarks/qlandmarkidfetchrequest.h \
                    ../landmarks/qlandmarkidfilter.h \
                    ../landmarks/qlandmarkimportrequest.h \
                    ../landmarks/qlandmarkintersectionfilter.h \
                    ../landmarks/qlandmarkmanager.h \
                    ../landmarks/qlandmarkmanagerengine.h \
                    ../landmarks/qlandmarkmanagerenginefactory.h \
                    ../landmarks/qlandmarknamefilter.h \
                    ../landmarks/qlandmarknamesort.h \
                    ../landmarks/qlandmarkproximityfilter.h \
                    ../landmarks/qlandmarkremoverequest.h \
                    ../landmarks/qlandmarksaverequest.h \
                    ../landmarks/qlandmarksortorder.h \
                    ../landmarks/qlandmarkunionfilter.h

PRIVATE_HEADERS += \
                    ../landmarks/qlandmark_p.h \
                    ../landmarks/qlandmarkabstractrequest_p.h \
                    ../landmarks/qlandmarkboxfilter_p.h \
                    ../landmarks/qlandmarkcategory_p.h \
                    ../landmarks/qlandmarkcategoryfilter_p.h \
                    ../landmarks/qlandmarkcategoryid_p.h \
                    ../landmarks/qlandmarkfilter_p.h \
                    ../landmarks/qlandmarkid_p.h \
                    ../landmarks/qlandmarkidfilter_p.h \
                    ../landmarks/qlandmarkintersectionfilter_p.h \
                    ../landmarks/qlandmarkmanager_p.h \
                    ../landmarks/qlandmarknamefilter_p.h \
                    ../landmarks/qlandmarkproximityfilter_p.h \
                    ../landmarks/qlandmarkrequests_p.h \
                    ../landmarks/qlandmarksortorder_p.h \
                    ../landmarks/qlandmarkunionfilter_p.h

SOURCES += \
            ../landmarks/qlandmark.cpp \
            ../landmarks/qlandmarkabstractrequest.cpp \
            ../landmarks/qlandmarkattributefilter.cpp \
            ../landmarks/qlandmarkboxfilter.cpp \
            ../landmarks/qlandmarkcategory.cpp \
            ../landmarks/qlandmarkcategoryfetchrequest.cpp \
            ../landmarks/qlandmarkcategoryfetchbyidrequest.cpp \
            ../landmarks/qlandmarkcategoryfilter.cpp \
            ../landmarks/qlandmarkcategoryid.cpp \
            ../landmarks/qlandmarkcategoryidfetchrequest.cpp \
            ../landmarks/qlandmarkcategoryremoverequest.cpp \
            ../landmarks/qlandmarkcategorysaverequest.cpp \
            ../landmarks/qlandmarkexportrequest.cpp \
            ../landmarks/qlandmarkfetchrequest.cpp \
            ../landmarks/qlandmarkfetchbyidrequest.cpp \
            ../landmarks/qlandmarkfilter.cpp \
            ../landmarks/qlandmarkid.cpp \
            ../landmarks/qlandmarkidfetchrequest.cpp \
            ../landmarks/qlandmarkidfilter.cpp \
            ../landmarks/qlandmarkimportrequest.cpp \
            ../landmarks/qlandmarkintersectionfilter.cpp \
            ../landmarks/qlandmarkmanager.cpp \
            ../landmarks/qlandmarkmanager_p.cpp \
            ../landmarks/qlandmarkmanagerengine.cpp \
            ../landmarks/qlandmarkmanagerenginefactory.cpp \
            ../landmarks/qlandmarknamefilter.cpp \
            ../landmarks/qlandmarknamesort.cpp \
            ../landmarks/qlandmarkproximityfilter.cpp \
            ../landmarks/qlandmarkremoverequest.cpp \
            ../landmarks/qlandmarksaverequest.cpp \
            ../landmarks/qlandmarksortorder.cpp \
            ../landmarks/qlandmarkunionfilter.cpp



HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
