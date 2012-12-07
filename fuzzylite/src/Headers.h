/*
 * Headers.h
 *
 *  Created on: 30/11/2012
 *      Author: jcrada
 */

#ifndef FL_HEADERS_H_
#define FL_HEADERS_H_

#include "definitions.h"
#include "scalar.h"

#include "defuzzifier/CenterOfGravity.h"
#include "defuzzifier/Defuzzifier.h"
#include "defuzzifier/MaximumDefuzzifier.h"

#include "engine/Configuration.h"
#include "engine/Engine.h"
#include "engine/Operator.h"

#include "fcl/FclExporter.h"

#include "hedge/Any.h"
#include "hedge/Extremely.h"
#include "hedge/Hedge.h"
#include "hedge/Not.h"
#include "hedge/Seldom.h"
#include "hedge/Somewhat.h"
#include "hedge/Very.h"

#include "rule/Antecedent.h"
#include "rule/Consequent.h"
#include "rule/Infix.h"
#include "rule/Rule.h"
#include "rule/RuleBlock.h"

#include "rule/mamdani/MamdaniAntecedent.h"
#include "rule/mamdani/MamdaniConsequent.h"
#include "rule/mamdani/MamdaniExpression.h"
#include "rule/mamdani/MamdaniRule.h"

#include "term/Accumulated.h"
#include "term/Bell.h"
#include "term/Gaussian.h"
#include "term/Rectangle.h"
#include "term/Shoulder.h"
#include "term/Sigmoid.h"
#include "term/Term.h"
#include "term/Thresholded.h"
#include "term/Trapezoid.h"
#include "term/Triangle.h"

#include "variable/InputVariable.h"
#include "variable/OutputVariable.h"
#include "variable/Variable.h"

#include "example/Example.h"
#include "example/SimpleMamdani.h"

#endif /* FL_HEADERS_H_ */
