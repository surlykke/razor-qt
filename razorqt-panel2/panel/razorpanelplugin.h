/********************************************************************
  Copyright: 2010 Alexander Sokoloff <sokoloff.a@gmail.ru>

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License.
  version 2 as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*********************************************************************/

#ifndef RAZORPANELPLUGIN_H
#define RAZORPANELPLUGIN_H

#include <QToolBar>

/*! \brief The RazorPanelPlugin class provides a plugin panel.
 */
class RazorPanelPlugin : public QToolBar
{
    Q_OBJECT
public:
    explicit RazorPanelPlugin(QWidget *parent = 0);
    virtual ~RazorPanelPlugin();
signals:

public slots:

};

#endif // RAZORPANELPLUGIN_H
