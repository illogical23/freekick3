#ifndef SOCCER_WIDGET_H
#define SOCCER_WIDGET_H

#include <string>
#include <boost/shared_ptr.hpp>
#include <vector>

#include <SDL_image.h>
#include <SDL_ttf.h>
#include <GL/gl.h>

#include "common/Color.h"
#include "common/Texture.h"
#include "common/Rectangle.h"

namespace Soccer {

class Widget {
	public:
		Widget(const Common::Rectangle& dim);
		bool clicked(int x, int y) const;
		const Common::Rectangle& getRectangle() const;
		bool hidden() const;
		void hide();
		void show();
		bool active() const;
		void activate();
		void deactivate();

	protected:
		Common::Rectangle mRectangle;
		bool mHidden;
		bool mActive;
};

}

#endif


