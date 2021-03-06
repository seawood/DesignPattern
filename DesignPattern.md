# 设计模式

--------------

## 简单工厂模式（Simple Factory Pattern/Static Factory Methord）
- **分类**：属于创建型模式
- **机理**：可以根据参数的不同返回不同类的实例，专门定义一个类来负责创建其他类的实例，被创建的实例通常都有共同的父类
- **优点**：提高系统的灵活性，可以方便地增加要创建的子类类型；分割了责任，用户只需要知道要创建的类对应的参数，不需要记住具体的类名，也不用关心类创建的具体细节。
- **缺点**：添加新类就要修改工厂类的逻辑。
- **代码示例**：[Simple Factor Pattern代码](https://github.com/seawood/DesignPattern/tree/master/SimpleFactory)
- **模式结构**：工厂类，要创建的各种子类，子类的父类



