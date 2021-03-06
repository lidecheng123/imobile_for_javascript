//
//  DatasetType.h
//  Visualization
//
//  版权所有 （c）2013 北京超图软件股份有限公司。保留所有权利。
//

#import <Foundation/Foundation.h>
/** 该类定义了数据集类型常量。
 * 
* 数据集一般为存储在一起的相关数据的集合；根据数据类型的不同，分为矢量数据集、栅格数据集和影像数据集，以及为了处理特定问题而设计的如拓扑数据集，网络数据集等。根据要素的空间特征的不同，矢量数据集又分为点数据集，线数据集，面数据集，复合数据集，文本数据集，纯属性数据集等。
 */
typedef enum{
     
   // UnKnown     =-1,   安卓没有该接口 IOS暂时注释掉
	
	/** 纯属性数据集。 
	*<p> 用于存储和管理纯属性数据，纯属性数据用来描述地形地物特征、形状等信息，如河流的长度、宽度等。该数据集没有空间图形数据。即纯属性数据集不能作为图层被添加到地图窗口中显示。
	*/
    TABULAR     =0,
	
	/**  点数据集。 
	*<p> 用于存储点对象的数据集类，例如离散点的分布。
	*/
    POINT       =1,
	
	/**  线数据集。
	*<p> 用于存储线对象的数据集，例如河流、道路、国家边界线的分布。
	*/
    LINE        =3,
	
	/** 网络数据集。
	*<p> 网络数据集是用于存储具有网络拓扑关系的数据集。如道路交通网络等。网络数据集和点数据集、线数据集不同，它既包含了网络线对象，也包含了网络结点对象，还包含了两种对象之间的空间拓扑关系。基于网络数据集，可以进行路径分析、服务区分析、最近设施查找、选址分区、公交换乘以及邻接点、通达点分析等多种网络分析。
	*/
    Network     =4,
	
	/** 多边形数据集。
	*<p> 用于存储面对象的数据集，例如表示房屋的分布、行政区域等。
	*/
    REGION      =5,
	
	/**  文本数据集。
	*<p> 用于存储文本对象的数据集，那么文本数据集中只能存储文本对象，而不能存储其他几何对象。例如表示注记的文本对象。
	*/
    TEXT        =7,
	
    /**  路由数据集。
     *<p>
     */
    //LineM       =35, 暂不开放该接口
	
	/** 影像数据集。
	*<p>  不具备属性信息，例如影像地图、多波段影像和实物地图等。其中每一个栅格存储的是一个颜色值或颜色的索引值（RGB 值）。
	*/
    IMAGE       =81,  
   // MrSID		=82,	 安卓没有该接口 IOS暂时注释掉 
   /**  栅格数据集。
	*<p>  例如高程数据集和土地利用图。其中每一个栅格存储的是表示地物的属性值（例如高程值）。
	*/
    Grid		=83,	 //栅格数据集
	 /**  数字高程模型。
	*<p> 是一种对空间起伏变化的连续表示方法，是一种特殊的DatasetGrid数据模型，每个网格的值为高程值，而且有标准的颜色表来表示。
	*/
    DEM			=84,	 
  //  ECW			=85,	 安卓没有该接口 IOS暂时注释掉
   WMS			=86,
   WCS			=87,
  /// 多波段影像。
   MBImage     =88,      
   // MBGrid      =89,     安卓没有该接口 IOS暂时注释掉 
  //  MBDEM		=90,    安卓没有该接口 IOS暂时注释掉 
	///   三维点。
    PointZ		=101,	  
	/// 三维线。
    LineZ		=103,	   
	/// 三维面。
    RegionZ		=105,	  
	/// 模型数据类型。
    VECTORMODEL = 106 ,
  //  PointGL		=137,	 安卓没有该接口 IOS暂时注释掉 
  /// 不规则三角网。TIN模型根据区域有限个点集将区域划分为相连的三角面网络，区域中任意点落在三角面的顶点、边上或三角形内。
    TIN			=139, 
   /**  复合数据集。
	*<p> 指可以存储多种几何对象的数据集，即用来存储点、线、面、文本等不同类型的对象的集合。CAD 数据集中各对象可以有不同的风格，CAD 数据集为每个对象存储风格。
	*/	
    CAD			=149,	
    WFS		=151,
    NETWORK3D =205,
  //  LinkTable	=153,	 安卓没有该接口 IOS暂时注释掉
  //  Topo		=154,	 安卓没有该接口 IOS暂时注释掉
   // TIN2	=155,	 安卓没有该接口 IOS暂时注释掉
   // RelClass	=156 安卓没有该接口 IOS暂时注释掉
}DatasetType;

