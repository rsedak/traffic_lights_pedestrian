/* Traffic lights - Train
 *  
 * Created 2022 by Robert Sedak
 * 
 * This example code is in the public domain.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
 *  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHOR(S) OR 
 *  CONTRIBUTOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
 *  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR 
 *  THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
 
 void setup() {
  // initialize digital pins 12 and 13 as an ouput.
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
 }

void loop() {
  digitalWrite(12, HIGH); // turn the LED D12 on
  digitalWrite(13, LOW);  // turn the LED D13 off
  delay(2000);            // wait for two seconds
  digitalWrite(12, LOW);  // turn the LED D12 off
  digitalWrite(13, HIGH); // turn the LED D13 on
  delay(2000);            // wait for two seconds
  digitalWrite(13, LOW);  // turn the LED D13 off
  delay(200);             // wait for 0.2 seconds
  digitalWrite(13, HIGH); // turn the LED D13 on
  delay(200);             // wait for 0.2 seconds
  digitalWrite(13, LOW);  // turn the LED D13 off
  delay(200);             // wait for 0.2 seconds
  digitalWrite(13, HIGH); // turn the LED D13 on
  delay(200);             // wait for 0.2 seconds
  digitalWrite(13, LOW);  // turn the LED D13 off
  delay(200);             // wait for 0.2 seconds
  digitalWrite(13, HIGH); // turn the LED D13 on
  delay(200);             // wait for 0.2 seconds
}
