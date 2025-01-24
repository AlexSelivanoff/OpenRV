//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __MuQt5__QItemSelectionModelType__h__
#define __MuQt5__QItemSelectionModelType__h__
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
    class MuQt_QItemSelectionModel;

    //
    //  NOTE: file generated by qt2mu.py
    //

    class QItemSelectionModelType : public Class
    {
    public:
        typedef MuQt_QItemSelectionModel MuQtType;
        typedef QItemSelectionModel QtType;

        //
        //  Constructors
        //

        QItemSelectionModelType(Context* context, const char* name,
                                Class* superClass = 0, Class* superClass2 = 0);

        virtual ~QItemSelectionModelType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[4];
    };

    // Inheritable object

    class MuQt_QItemSelectionModel : public QItemSelectionModel
    {
    public:
        virtual ~MuQt_QItemSelectionModel();
        MuQt_QItemSelectionModel(Pointer muobj, const CallEnvironment*,
                                 QAbstractItemModel* model);
        MuQt_QItemSelectionModel(Pointer muobj, const CallEnvironment*,
                                 QAbstractItemModel* model, QObject* parent);
        virtual bool event(QEvent* e);
        virtual bool eventFilter(QObject* watched, QEvent* event);

    protected:
        virtual void customEvent(QEvent* event);
        virtual void timerEvent(QTimerEvent* event);

    public:
        void emitSelectionChanged_pub(const QItemSelection& newSelection,
                                      const QItemSelection& oldSelection)
        {
            emitSelectionChanged(newSelection, oldSelection);
        }

        void emitSelectionChanged_pub_parent(const QItemSelection& newSelection,
                                             const QItemSelection& oldSelection)
        {
            QItemSelectionModel::emitSelectionChanged(newSelection,
                                                      oldSelection);
        }

        void customEvent_pub(QEvent* event) { customEvent(event); }

        void customEvent_pub_parent(QEvent* event)
        {
            QItemSelectionModel::customEvent(event);
        }

        void timerEvent_pub(QTimerEvent* event) { timerEvent(event); }

        void timerEvent_pub_parent(QTimerEvent* event)
        {
            QItemSelectionModel::timerEvent(event);
        }

    public:
        const QItemSelectionModelType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance* QItemSelectionModelType::cachedInstance(
        const QItemSelectionModelType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt__QItemSelectionModelType__h__
