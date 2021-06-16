NAME         = QtComprehend
TARGET       = $${NAME}

QT           = core
QT          -= gui
QT          += network
QT          += sql
QT          += script
QT          += QtCURL
QT          += QtCUDA
QT          += QtOpenCV
QT          += QtFFmpeg
QT          += QtAudio
QT          += QtPCAP
QT          += QtCompression
QT          += QtArchivers
QT          += Essentials
QT          += QtCalendar
QT          += QtCryptography
QT          += QtMIME
QT          += SqlAnalyzer
QT          += QtGMP
QT          += QtGSL
QT          += QtAlgebra
QT          += QtDiscrete
QT          += QtFFT
QT          += Mathematics
QT          += QtFuzzy
QT          += QtFLP
QT          += QtGeography
QT          += NetProtocol
QT          += QtUDT
QT          += QtFTP
QT          += AudioIO
QT          += QtPhonemes
QT          += QtVocal
QT          += QtLinguistics
QT          += AudioIO

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/$${NAME}

HEADERS     += $${PWD}/../../include/$${NAME}/QtComprehend
HEADERS     += $${PWD}/../../include/$${NAME}/qtcomprehend.h

SOURCES     += $${PWD}/comprehend.cpp

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)

TRNAME       = $${NAME}
include ($${PWD}/../../Translations.pri)
