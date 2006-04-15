/** @file
IntOption - class for widget containing one editable setting of type integer
*/

#include "intoption.h"
#include <qvalidator.h>
#include <qstring.h>
#include <qlineedit.h>

namespace gui {

/** Default constructor of IntOption item
 @param parent parent Option Editor containing this control
 @param _key Key in settings for this option
 @param defValue Default value if option not found in configuration
 */
IntOption::IntOption(const QString &_key/*=0*/,QWidget *parent/*=0*/,int defValue/*=0*/)
 : StringOption (_key,parent) {
 ed->setText(QString::number(defValue));
 ed->setValidator(new QIntValidator(ed));
}

/** default destructor */
IntOption::~IntOption() {
}

} // namespace gui
