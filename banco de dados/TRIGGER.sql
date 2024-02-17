-- --------------------------------------------------------
-- Servidor:                     127.0.0.1
-- Versão do servidor:           5.6.48-log - MySQL Community Server (GPL)
-- OS do Servidor:               Win64
-- HeidiSQL Versão:              8.3.0.4694
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;

-- Copiando estrutura do banco de dados para banco_teste
CREATE DATABASE IF NOT EXISTS `banco_teste` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `banco_teste`;


-- Copiando estrutura para tabela banco_teste.cadfun
CREATE TABLE IF NOT EXISTS `cadfun` (
  `CODFUN` int(11) NOT NULL,
  `NOME` varchar(40) NOT NULL,
  `DEPTO` char(2) DEFAULT NULL,
  `FUNCAO` char(20) DEFAULT NULL,
  `SALARIO` decimal(10,2) DEFAULT NULL,
  PRIMARY KEY (`CODFUN`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- Exportação de dados foi desmarcado.


-- Copiando estrutura para procedure banco_teste.funcionarios_de_depto_3
DELIMITER //
CREATE DEFINER=`mateus`@`localhost` PROCEDURE `funcionarios_de_depto_3`()
BEGIN
	SELECT * FROM cadfun WHERE depto = 3;
END//
DELIMITER ;


-- Copiando estrutura para tabela banco_teste.morto
CREATE TABLE IF NOT EXISTS `morto` (
  `CODFUN` int(11) NOT NULL,
  `NOME` varchar(40) DEFAULT NULL,
  `DEPTO` char(2) DEFAULT NULL,
  `FUNCAO` char(20) DEFAULT NULL,
  `SALARIO` decimal(10,2) DEFAULT NULL,
  PRIMARY KEY (`CODFUN`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- Exportação de dados foi desmarcado.


-- Copiando estrutura para procedure banco_teste.salario
DELIMITER //
CREATE DEFINER=`mateus`@`localhost` PROCEDURE `salario`(in idEnpregado int)
BEGIN
	select SALARIO FROM CADFUN WHERE CODFUN = IdEnpregado;
END//
DELIMITER ;


-- Copiando estrutura para procedure banco_teste.SALARIO_MAXIMO
DELIMITER //
CREATE DEFINER=`mateus`@`localhost` PROCEDURE `SALARIO_MAXIMO`(in idEnpregado int, out salario_Limite decimal)
BEGIN
DECLARE FF DECIMAL;
SET FF = (select SALARIO as SALARIO_ATUAL FROM CADFUN WHERE CODFUN = IdEnpregado);
SET salario_Limite = 10000 - FF;
select SALARIO as SALARIO_ATUAL FROM CADFUN WHERE CODFUN = IdEnpregado;
END//
DELIMITER ;


-- Copiando estrutura para trigger banco_teste.tr_demitido
SET @OLDTMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION';
DELIMITER //
CREATE TRIGGER `tr_demitido` AFTER DELETE ON `cadfun` FOR EACH ROW BEGIN
	INSERT INTO morto (CODFUN, NOME, DEPTO, FUNCAO, SALARIO)
	VALUES (OLD.CODFUN, OLD.NOME, OLD.DEPTO, OLD.FUNCAO, OLD.SALARIO);
END//
DELIMITER ;
SET SQL_MODE=@OLDTMP_SQL_MODE;


-- Copiando estrutura para trigger banco_teste.TR_SALARIO_LIMITE
SET @OLDTMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION';
DELIMITER //
CREATE TRIGGER `TR_SALARIO_LIMITE` BEFORE UPDATE ON `cadfun` FOR EACH ROW BEGIN
	IF NEW.SALARIO > 10000.00 THEN
		SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'O salário inserido ultrapassa o salário limite';
	END IF;
END//
DELIMITER ;
SET SQL_MODE=@OLDTMP_SQL_MODE;


-- Copiando estrutura para trigger banco_teste.TR_SALARIO_LIMITE_IN
SET @OLDTMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION';
DELIMITER //
CREATE TRIGGER `TR_SALARIO_LIMITE_IN` BEFORE INSERT ON `cadfun` FOR EACH ROW BEGIN
	IF NEW.SALARIO >10000.00 THEN
		SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'O salário inserido ultrapassa o salário limite';
	END IF;


END//
DELIMITER ;
SET SQL_MODE=@OLDTMP_SQL_MODE;
/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
