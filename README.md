# Controlador-de-Motores-L293D
Este proyecto demuestra cómo controlar motores de corriente continua (DC) utilizando el controlador de motores L293D. El L293D es un circuito integrado de puente H doble, lo que permite controlar la dirección de rotación de dos motores de forma independiente. Es ideal para proyectos de robótica o automatización, donde se requiere control preciso de motores.

# Características del Proyecto Control de dos motores DC: 
• El controlador L293D permite controlar dos motores, ajustando su dirección de rotación (hacia adelante o hacia atrás).

• Uso eficiente de pines de control: Solo se requieren unos pocos pines del microcontrolador (como un Arduino o Raspberry Pi) para manejar los dos motores.

• Funcionalidad de puente H: El puente H integrado en el L293D permite que los motores se muevan en ambas direcciones, lo que es esencial para vehículos robóticos o mecanismos de control direccional.

• Soporte para motores de hasta 600 mA: El L293D puede manejar corrientes de hasta 600 mA por canal, lo que es suficiente para muchos motores pequeños o medianos.

# Esquemático
Este es un circuito para controlar un motor utilizando un puente H con el integrado L293D y una placa Arduino UNO. El L293D es un driver de motor que permite controlar la dirección y velocidad de un motor de corriente continua (DC) aplicando voltajes diferentes a sus terminales. A continuación te explico los componentes principales del circuito:

![Esquemático del Controlador de Motores](Esquematico2%20Controlador%20de%20Motores.png)

# Descripción del Circuito:
• Arduino UNO: Es el cerebro del circuito, encargado de enviar señales de control al L293D para manejar el motor.

• L293D: Este circuito integrado actúa como un puente H, permitiendo controlar la dirección de giro del motor. Las señales enviadas por el Arduino determinan si el motor gira en un sentido u otro.

• LEDs: Los LEDs rojo y verde actúan como indicadores visuales. Por ejemplo, pueden indicar en qué dirección está girando el motor (LED rojo para un sentido, LED verde para el otro).

• Motor DC: El motor se conecta a la salida del L293D y se mueve en función de las señales que recibe.

• Resistencias: Las resistencias protegen los LEDs de una corriente excesiva.

# ¿Cómo Funciona?
• El Arduino controla los pines de entrada del L293D. Dependiendo de las señales enviadas a estos pines, el motor girará hacia adelante o hacia atrás.

• Los LEDs permiten una retroalimentación visual. Uno se encenderá cuando el motor gire en un sentido, y el otro cuando gire en el sentido contrario.

# Componentes
• Arduino UNO

• L293D (Driver de motor)

• Motor DC

• LEDs (rojo y verde)

• Resistencias

• Protoboard

• Cables de conexión

# Funcionamiento
El Arduino envía señales al puente H (L293D) para controlar la dirección del motor. Los LEDs indican la dirección de giro del motor, y las resistencias protegen los LEDs.

# Aplicaciones
• Robots móviles

• Sistemas de automatización

• Control de plataformas mecánicas
