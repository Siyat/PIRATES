#ifndef CRENDERWINDOW_H
#define CRENDERWINDOW_H


#include <map>

#include <common/SFML.h>
#include <client/CTileMap.h>
#include <common/CMapObject.h>
#include <client/CRender.h>


class CRender;


class CRenderWindow : public sf::RenderWindow
{
    public :
                CRenderWindow(std::string name);
                ~CRenderWindow();

        void    update(std::vector<CMapObject*>& in);
        void    render();

    private :
        sf::View                    m_mapView;
        CTileMap                    m_tileMap;

        std::vector<sf::Texture*>   m_vTextures;
        std::map<int, CRender*>     m_mRenders;
};

#endif


