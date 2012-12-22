/*
 * Wizard.h
 *
 *  Created on: 14/12/2012
 *      Author: jcrada
 */

#ifndef FLQT_WIZARD_H_
#define FLQT_WIZARD_H_

#include <QtGui/QDialog>
#include <fl/Headers.h>

#include "ui/ui_Wizard.h"

#include <vector>
#include <string>

namespace fl {
    namespace qt {

        class Wizard: public QDialog {
        Q_OBJECT

        protected slots:
            void onCurrentTermChanged(int index);
            void onClickGenerate();
            void accept();
            void reject();
            protected:
            virtual void connect();
            virtual void disconnect();

            static std::vector<std::pair<scalar, scalar> >
            Overlap(int number_of_sections,
                    scalar min, scalar max, scalar factor = 0.5) ;
            virtual void createTerms(int number, scalar min, scalar max,
                    const std::string& classname, bool shoulders);

        public:
            std::string prefix;
            std::vector<fl::Term*> terms;
            Ui::Wizard* ui;

            Wizard(QWidget* parent = NULL, Qt::WindowFlags = 0);
            virtual ~Wizard();

            virtual void setup(const std::string& prefix);

        };

    } 
} 
#endif /* FLQT_WIZARD_H_ */
