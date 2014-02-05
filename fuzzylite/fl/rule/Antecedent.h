/*   Copyright 2013 Juan Rada-Vilela

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * Antecedent.h
 *
 *  Created on: 2/12/2012
 *      Author: jcrada
 */

#ifndef FL_ANTECEDENT_H
#define FL_ANTECEDENT_H

#include "fl/fuzzylite.h"

#include <string>

namespace fl {
    class Engine;
    class Rule;
    class TNorm;
    class SNorm;
    class Expression;

    class FL_EXPORT Antecedent {
    protected:
        std::string _text;
        Expression* _expression;

    public:
        Antecedent();
        virtual ~Antecedent();

        virtual void setText(const std::string& text);
        virtual std::string getText() const;

        virtual Expression* getExpression() const;

        virtual bool isLoaded() const;

        virtual void unload();
        virtual void load(Rule* rule, const Engine* engine);
        virtual void load(const std::string& antecedent, Rule* rule, const Engine* engine);

        virtual scalar activationDegree(const TNorm* conjunction, const SNorm* disjunction,
                const Expression* node) const;

        virtual scalar activationDegree(const TNorm* conjunction, const SNorm* disjunction) const;

        virtual std::string toString() const;

        virtual std::string toPrefix(const Expression* node = NULL) const;
        virtual std::string toInfix(const Expression* node = NULL) const;
        virtual std::string toPostfix(const Expression* node = NULL) const;

    private:
        FL_DISABLE_COPY(Antecedent)
    };

}

#endif /* FL_ANTECEDENT_H */
