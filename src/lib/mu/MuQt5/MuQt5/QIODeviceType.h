//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __MuQt5__QIODeviceType__h__
#define __MuQt5__QIODeviceType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngine/QtWebEngine>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu
{

    //
    //  NOTE: file generated by qt2mu.py
    //

    class QIODeviceType : public Class
    {
    public:
        typedef QIODevice MuQt_QIODevice;
        typedef MuQt_QIODevice MuQtType;
        typedef QIODevice QtType;

        //
        //  Constructors
        //

        QIODeviceType(Context* context, const char* name, Class* superClass = 0,
                      Class* superClass2 = 0);

        virtual ~QIODeviceType();

        static bool isInheritable() { return false; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[17];
    };

    inline ClassInstance*
    QIODeviceType::cachedInstance(const QIODeviceType::MuQtType* obj)
    {
        return 0;
    }

} // namespace Mu

#endif // __MuQt__QIODeviceType__h__
