# Lily58 QMK Configurations Repository

![Lily58](https://i.redd.it/to14yr0lb5g61.jpg)

Este repositório tem a finalidade de armazenar minhas configurações pessoais de layout de teclado Lily58, baseado no firmware QMK. Aqui você encontrará os arquivos de configuração necessários para personalizar as teclas e o layout do meu teclado Lily58.

## Sobre o Teclado Lily58

O Lily58 é um teclado split mecânico de 58 teclas, com um layout ergonômico dividido em duas metades, projetado para melhorar a experiência de digitação e reduzir a fadiga das mãos durante o uso prolongado. O teclado é compatível com o firmware QMK, o que permite a customização avançada das teclas e funcionalidades.

![Layout](https://user-images.githubusercontent.com/6285554/47273241-38ee8300-d5cc-11e8-9099-10c1b35e24fc.png)

## Pré-requisitos

Antes de começar, certifique-se de que você tenha o seguinte software instalado em seu computador:

1. [QMK Toolbox](https://qmk.fm/toolbox/) - Para fazer o flash do firmware no teclado.
2. Editor de código de sua preferência - Para editar os arquivos de configuração.
### Obs:
* As configurações estão usando:
  * Arduino Pro Micro
  * Sem RGB ou qualquer tipo de retro iluminação
  * Lado esquerdo como `master`
## Como Usar

1. Clone este repositório em sua máquina:
```
git clone https://github.com/mateuscomh/myKbdLily.git
```
2. Edite os arquivos de configuração:

   Navegue até o diretório do teclado específico (por exemplo, `lily58/rev1`) e modifique os arquivos `keymap.c` e `config.h` de acordo com suas preferências de layout e mapeamento de teclas.

3. Compilar o firmware:

   Use o QMK Toolbox para compilar o firmware após fazer as alterações. Certifique-se de que seu teclado esteja conectado ao computador via USB.

4. Flash do firmware:

   Utilize o QMK Toolbox para fazer o flash do firmware compilado em seu teclado Lily58.
   
   ``` bash
   qmk flash -kb lily58/rev1 -km lily58l -bl avrdude-split-left
   qmk compile -kb lily58/rev1 -km lily58l
   ```

5. Experimente e ajuste:

   Após fazer o flash do firmware, teste o teclado e faça ajustes conforme necessário para atender suas necessidades e preferências.

## Agradecimentos

- Agradecimento especial à comunidade QMK por desenvolver e manter o firmware de código aberto, permitindo a personalização dos teclados mecânicos.
- Agradecimentos ao criador do teclado Lily58 e aos colaboradores que o tornaram possível.

## Contribuindo

Se você tiver sugestões de melhorias ou correções, sinta-se à vontade para abrir uma *issue* ou enviar um *pull request*. Sua contribuição é sempre bem-vinda!

## Aviso Legal

Lembre-se de que a configuração do teclado é uma preferência pessoal, e este repositório é específico para minhas próprias necessidades e layout de teclado. Fique à vontade para se inspirar ou usar partes deste repositório em seu próprio teclado Lily58, mas saiba que as configurações podem não se adequar perfeitamente ao seu estilo de digitação.

**Use por sua conta e risco.**

## Licença

Este projeto é licenciado sob a [MIT License](https://mit-license.org).

