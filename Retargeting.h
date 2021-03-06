/*
 * File:   retargeting.h
 * Author: Andrew Tilisky
 *
 * Created on November 2, 2012, 10:41 PM
 */

#ifndef RETARGETING_H
#define RETARGETING_H
//#include <string>
#include <QGraphicsPixmapItem>
using namespace std;

class Retargeting
{
    public:
        Retargeting();
        Retargeting(const Retargeting& orig);
        virtual ~Retargeting();
        std::string getImagePath();
        bool setImage(std::string path);
        void setEnergy(QImage);
        QImage getImage();
        QImage getEnergy();
        QImage getRetargetedImage();

        bool isEnergySet();
        bool isImageSet();
        bool isRetargetSuccessful();

        QImage energyFunction(QImage);

        bool carveVertSeams(int);
        bool carveLatSeams(int);
    private:
        QImage image;
        QImage energy;
        QImage retargetedImage;

        std::string imagePath;
        std::string lastRetargetPath;
        struct sort_pred;
        enum SeamDirections { UP, UPRIGHT, UPLEFT, LEFT, LEFTDOWN, LEFTUP};
        bool energySet;
        bool imageSet;
        bool retargetSuccess;
};

#endif  /* RETARGETING_H */

