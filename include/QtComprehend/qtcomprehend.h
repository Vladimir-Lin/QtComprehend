/****************************************************************************
 *
 * Copyright (C) 2001~2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Foxman , Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com
 * URL      : http://qtcomprehend.sourceforge.net/
 *
 * QtComprehend acts as an interface between Qt and Machine Understanding.
 * Please keep QtComprehend as simple as possible.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#ifndef QT_COMPREHEND_H
#define QT_COMPREHEND_H

#include <QtCore>
#include <QtScript>
#include <QtCURL>
#include <QtCUDA>
#include <QtOpenCV>
#include <QtFFmpeg>
#include <QtAudio>
#include <QtPCAP>
#include <QtCompression>
#include <QtArchivers>
#include <Essentials>
#include <QtCalendar>
#include <QtCryptography>
#include <QtMIME>
#include <SqlAnalyzer>
#include <QtGMP>
#include <QtGSL>
#include <QtAlgebra>
#include <QtDiscrete>
#include <QtFFT>
#include <Mathematics>
#include <QtFuzzy>
#include <QtFLP>
#include <QtGeography>
#include <NetProtocol>
#include <QtUDT>
#include <QtFTP>
#include <AudioIO>
#include <QtPhonemes>
#include <QtVocal>
#include <QtLinguistics>
#include <AudioIO>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTCOMPREHEND_LIB)
#      define Q_COMPREHEND_EXPORT Q_DECL_EXPORT
#    else
#      define Q_COMPREHEND_EXPORT Q_DECL_IMPORT
#    endif
#else
#      define Q_COMPREHEND_EXPORT
#endif

#define QT_COMPREHEND_LIB 1

namespace N
{

class Q_COMPREHEND_EXPORT Imprecise
{
  public:

    explicit Imprecise (void) ;
    virtual ~Imprecise (void) ;

  protected:

  private:

} ;

}

QT_END_NAMESPACE

#endif
